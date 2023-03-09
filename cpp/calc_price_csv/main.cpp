#include <iostream>
#include <fstream>    // file stream
#include <vector>

using namespace std;

struct product {
    int index, qtt=0;
    string name;
    float total_cost, unit_cost, fee, gain, profit, resale;
};

/*
index    value
0        key(index of the product)
1        name
2        quantity
3        unit cost
4        fee
5        gain
6        profit
7        resale
*/

#define max_product_name_leght 50
#define separator ", "

/*
ref, name, qutd, cost, fee, gain, profit, resale
*/

void receiveInt(int &val){
    string text;
    bool error;
    int value;
    do{
        cin >> text;
        try{
            value = stoi(text);
            error = false;
        } catch(...) {
            cout << "Erro, você deve digitar um número inteiro. Tente novamente: ";
            error = true;
        }
    } while (error);
    val = value;
}

void receiveFloat(float &val){
    string text;
    bool error;
    float value;
    do{
        cin >> text;
        try{
            value = stof(text);
            error = false;
        } catch(...) {
            cout << "Erro, você deve digitar um número. Tente novamente: ";
            error = true;
        }
    } while (error);
    val = value;
}

int main (){
    
    setlocale(LC_ALL, "portuguese");// Portuguese characters

    cout << "Iniciando programa..." << endl;

    vector<product> products;
    
    fstream f;

    f.open("test_csv_file.csv", ios::out | ios::app); // out file and append information

    f  << "ref" << separator
        << "product" << separator
        << "qtd" << separator
        << "total_cost" << separator 
        << "unit_cost" << separator
        << "fee" << separator 
        << "gain" << separator
        << "profit" << separator
        << "resale" << "\n";

    cout << "\nCalculadora de custo e preço de revenda de produtos\n\n";
    
    string name;
    int ref, qtt, product_index=0, total_qtt=0;
    float cost, fee, gain, profit, resale;
    float total_fee, discount;

    cout << "Digite o custo total do frete: ";
    receiveFloat(total_fee);

    cout << "Desconto total recebido, em R$: ";
    receiveFloat(discount);

    total_fee = total_fee - discount;

    char value_entered[max_product_name_leght];
    bool add_product = true;

    while(add_product){
        product_index++;

        product* prod_buffer = new product();

        prod_buffer->index = product_index;
        
        cout << "\n\nDigite o nome do produto: ";
        cin.ignore();
        getline(cin, prod_buffer->name);

        cout << "Custo total do produto: ";
        float total_cost;
        receiveFloat(prod_buffer->total_cost);

        cout << "Informe a quantidade: ";
        receiveInt(prod_buffer->qtt);

        cout << "Informe o ganho desejado sobre o produto (em %): ";
        receiveFloat(gain);
        gain = (gain/100) + 1;
        prod_buffer->gain = gain;
        
        prod_buffer->unit_cost = prod_buffer->total_cost/prod_buffer->qtt;
        
        products.push_back(*prod_buffer);
        
        delete prod_buffer;

        char answer;
        cout << "Deseja adicionar um novo produto(s/n)? ";
        cin >> answer;

        if((answer != 's') && (answer != 'S')){
            add_product = false;
            cout << "entrou no if: " << answer << endl;
        } 
    }

    // Computes total qtt:
    for(int i=0; i<products.size(); i++){
        total_qtt += products[i].qtt;
    }

    fee = total_fee / total_qtt;
    cout << "Total qtt: "  << total_qtt << endl;

    // Sums fee value for each product cost, computes resale and profit and saves in the csv file.
    for(int i=0; i<products.size(); i++){
        products[i].fee = fee;
        products[i].unit_cost += fee;
        products[i].resale = products[i].unit_cost * products[i].gain;
        products[i].profit = products[i].resale - products[i].unit_cost;

        f << "\n" << products[i].index << separator
            << products[i].name << separator
            << products[i].qtt << separator
            << products[i].total_cost << separator
            << products[i].unit_cost << separator
            << products[i].fee << separator
            << ((products[i].gain - 1)*100) << separator
            << products[i].profit << separator
            << products[i].resale << separator;
    }

    f.close();

    return  0;
}
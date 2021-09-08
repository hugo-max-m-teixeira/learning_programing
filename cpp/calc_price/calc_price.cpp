#include <iostream>
#include <fstream>

using namespace std;

float shipping_cost;
float unit_shipping, discount;
int qtd_products;

void add_product (string name, int total_price, int qtd){

}

int main (){

    fstream products;

    products.open("products.txt", ios::out | ios::app);

    cout << "Digite o custo do frete: ";
    cin >> shipping_cost;

    cout << "Digite a quatidade total de produtos: ";
    cin >> qtd_products;

    cout << "Desconto recebido: ";
    cin >> discount;


    unit_shipping = (shipping_cost - discount)/float(qtd_products);

    char opc = 's';
    while(opc=='s' || opc=='S'){
        string nome;
        float total_cost;
        float gain;
        int qtd;
        cout << "Name of the product: ";
        cin >> nome;

        cout << "Quantity of this product: ";
        cin >> qtd;

        cout << "Total cost of this product: ";
        cin >> total_cost;

        cout << "Gain:(%) ";
        cin >> gain;

        gain /= 100;
        gain += 1;

        float unit_cost = total_cost / qtd;
        float resale_price = (unit_cost+unit_shipping)*gain;
        float unit_real_gain = resale_price - (unit_cost+unit_shipping);

        products << "Product: " << nome << "\n";
        products << "Total cost: " << (total_cost+(unit_shipping*qtd)) << "\n";
        products << "Unit cost: " << (unit_cost+unit_shipping) << "\n";
        products << "gain: " << gain << "\n";
        products << "Resale price: " << resale_price << "\n";
        products << "Real gain per unit: " << unit_real_gain << "\n";
        products << "Total gain: " << unit_real_gain*qtd<< "\n";

        products << "\n\n";


        cout << "do you want to add another product?[s/n] ";
        cin >> opc;
    }

    //products.open(*"products.txt", ios::out | ios::in | ios::app);
    products.close();

    return 0;
}

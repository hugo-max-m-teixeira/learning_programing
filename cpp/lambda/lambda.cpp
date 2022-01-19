#include <iostream>

using namespace std;

int main (){
    auto percent = [](float ratio, float num){
        return num/ratio * 100;
    };

    cout << percent(50, 25) << endl;

    return 0;
}
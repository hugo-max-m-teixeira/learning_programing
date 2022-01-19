#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int n = -10;

    cout << abs(n) << endl;

    int num=10, den=3;
    div_t result;
    // ldiv_t lldiv_t size_t

    result = div(num, den);

    cout << num <<  " dividido por " << den << " = " << result.quot << " resto da divisão " << result.rem << endl;

    /*
        ldiv
        llabs
        lldiv
    */

    size_t sz;

    vector<int> numbers = {3,6,3,8,45};

    sz = numbers.size();

    cout << sz << endl;

    return 0;
}

#include <iostream>
using namespace std;

unsigned long fatorial (unsigned long i){
  if(i == 0){
    return 1;
  } else {
    return (i * fatorial(i - 1));
  }
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int num = 60;
   cout << "Calculador de fatorial\n\n";

  cout << "Type a number: ";
  cin >> num;

  cout << "O faotrial de " << num << " é : " <<  fatorial(num);
  return 0;

}

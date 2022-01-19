#include <iostream>
#include <typeinfo>

using namespace std;

class pessoa {
};

int main (){

	auto num{9.54};

	pessoa hugo;

	//cout << "Type of the variable: " << typeid(hugo).name() << endl;

	if(typeid(int).before(typeid(double))){
		cout << "int comes bafore char";
	} else {
		cout << "Char vem antes de int";
	}
	
	return 0;
}

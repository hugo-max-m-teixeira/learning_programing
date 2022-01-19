#include <iostream>
#include <functional>
using namespace std;

int soma (int n1, int n2){
	return n1 + n2;
}

struct something{
	int num;
	int dobro(){
		return num*2;
	}

};

class something2 {
public:
	int num;
	something2(int i):num(i){};
	int dobro(){
		return 2*num;
	}

private:


};


int main (){
	// BIND - ligação de uma função com uma variável (associação)
/*	
	int n1 = 10;
	const int n2 = 5;
	auto s1 = bind(soma, n1, n2);
	
	cout << s1() << endl;
*/
	// cref - cria uma referência entree dois elementos
	//
/*
	int n1 = 10;
	auto n2 = cref(n1);

	n1++;	// Como se fosse um ponteiro

	cout << n2 << endl;
*/

/*
	something n{10};
	something n2{5};

	auto dobro2 = mem_fn(&something::dobro);

	cout << dobro2(n2) << endl;
*/



	something2 n1{10};
	something2 n2{5};

	auto dobro2 = mem_fn(&something2::dobro);

	cout << dobro2(n1) << endl;

	return 0;
}

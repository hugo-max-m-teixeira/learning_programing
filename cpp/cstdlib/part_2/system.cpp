#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
	const char *text = "this is a set of characters";

	for(int i=0; i<10; i++){
		cout << i << endl;
	}

	_Exit(EXIT_SUCCESS); // C++11

	system("clear");
	system("pwd");
	cout << text << endl;
	system("pause");

	return 0;
}

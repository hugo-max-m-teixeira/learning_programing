#include <iostream>
#include <cstdlib>

using namespace std;

void end_program (){
	cout << "Thank you!" << endl;
}

int main (){

	atexit(end_program);// If you're using quick_exit, you will use at_quick_exit(), it do the same think but it is from c++11

	for(int i=0; i<10; i++){
		if(i<5){
			cout << i << endl;
		} else {
			exit(EXIT_SUCCESS); // Or you can use quick_exit(), it' the same thing but from c++11
			cout << i << endl;
		}
	}
	
	return 0;
}

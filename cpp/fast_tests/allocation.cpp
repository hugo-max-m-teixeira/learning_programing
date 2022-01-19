#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
	const char *text;
	
	text = (char*)malloc(sizeof(char));
	
	text = "testando... \nPrinting characters...";
	
	cout << text << endl;
	
	free((void*)text);
	
	return 0;
}

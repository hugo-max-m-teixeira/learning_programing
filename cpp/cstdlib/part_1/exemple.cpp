#include <iostream>
#include <cstdlib>	// stdlib.h is an old version

using namespace std;

int main () {
	double num;
	char numero[80];

	cin >> numero;
	num  = atof(numero);	//or can use strtod(string, NULL);

	cout << num << endl;

	// atof atoi atol
	// astrtof() astrtoi() astrtol()
	//

	return 0;
}

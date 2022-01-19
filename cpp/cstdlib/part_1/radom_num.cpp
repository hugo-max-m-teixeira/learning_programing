#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	
	srand(time(NULL)); //Radom source

	int radom;

	radom = rand()%50;// Radom number betwen 0 and 50

	cout << radom << endl;

	return 0;
}

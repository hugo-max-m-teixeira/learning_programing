#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	const char* p;

	p=getenv("PATH");

	cout << p << endl;

	return 0;
}

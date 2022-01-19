#include <iostream>
#include <cstdlib>

using namespace std;

int comp(const void *a, const void *b){
	return (*(int*) a - *(int*)b);
	// 0 => a == b
	// >0 => a > b
	// <0 => a < b
}

int main () {

    setlocale(LC_ALL, "portuguese");
	int vetor[] = {5,6,1,0,22,5,2,78,3,13};

	int to_find = 6;

	int *pos;

	qsort(vetor, 10, sizeof(int), comp);

	for (int i=0; i<10; i++){
        cout  <<  vetor[i] << endl;
	}

	pos = (int*) bsearch(&to_find, vetor, 10, sizeof(int), comp);

    cout << "Elemento: " << to_find << " encontrado na posição " << *pos << " do vetor.";

	return 0;
}

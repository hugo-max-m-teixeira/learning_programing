#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//calloc malloc free realloc
	
	srand(time(NULL));

	int tam = 10;
	
	// int *vetor; or int *vetor;
	int *vetor;

	vetor=(int*)calloc(tam, sizeof(int)); // calloc
	//vetor=(int*)malloc(sizeof(int)); // Malloc - don't need size of the vector
	
	for (int i=0; i<tam; i++){
		vetor[i] = rand()&100;
		cout << vetor[i] << endl;	
	}

	free(vetor);

	return 0;
}

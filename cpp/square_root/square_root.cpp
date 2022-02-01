#include <iostream>

using namespace std;

float square_root (float num){
	if(num < 0){
		return 0;
	}
	
	float result, min=num/10.0;
	
	auto centesimal = [](float n) -> float { return (int(n*100.0))/100.0; };

	while((centesimal(min)*centesimal(min)) < num){
		min += 0.0001;
		cout << min << endl;
 	}

	return centesimal(min);
}


int main (){

	cout << square_root(2) << endl;

	return 0;
}

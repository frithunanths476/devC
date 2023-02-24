#include <iostream>
using namespace std;

void impremeMensagem(){
	cout << "ola, mundo!";
}

float somar(float a, float b){
	return a + b;
}

main(){
	impremeMensagem();
	
	float numero, numero2;
	
	cout << "informe o primeiro numero: ";
	cin >> numero;
	
	cout << "informe o segundo numero: ";
	cin >> numero2;
	
	cout << somar(numero, numero2);
}

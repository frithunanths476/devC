#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float lado, resultado;
	
	cout << "informe o lado: ";
	cin >> lado;
	
	resultado = (lado*lado);
	cout << "a área é: "<< resultado;
}

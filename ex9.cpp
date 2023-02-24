#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float nascimento, resultado;
	const int hoje = 2023;
	
	cout << "informe o seu ano de nascimento: ";
	cin >> nascimento;
	
	resultado = (hoje - nascimento);
	cout << "a sua idade é: " << resultado;
}

#include <iostream>
using namespace std;

main (){
	setlocale (LC_ALL, "Portugues");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float peso, altura, resultado;
	
	cout << "informe o seu peso: ";
	cin >> peso;
	
	cout << "informe a sua altura: ";
	cin >> altura;
	
	resultado = (peso/ (altura*altura));
	if (resultado <= 18.5){
		cout << "Abaixo do peso";
	}else if (resultado >= 18.5 && resultado <= 24.9){
		cout << "Peso normal";
	}else if (resultado >= 25 && resultado <= 29.9){
		cout << "Sobrepeso";
	}else if (resultado >= 30 && resultado <= 34.9){
		cout << "Obesidade grau I";
	}else if (resultado >= 35 && resultado >= 39.9){
		cout << "Obesidade grau II";
	}else{
		cout << "Obesidade III";
	}
	
}

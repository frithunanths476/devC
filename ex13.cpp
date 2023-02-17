#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	const float pi = 3.14;
	float raio, resultado;
	
	cout << "informe o raio: ";
	cin >> raio;
	
	resultado = (pi*(raio*raio));
	cout << "a área é "<< resultado;
}

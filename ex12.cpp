#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float temperatura, resultado;
	
	cout << "informe a temperatura: ";
	cin >> temperatura;
	
	resultado = (temperatura*1.8+32);
	cout << "a temperatura em ceslsius é "<< temperatura << " em fahrenheit é "<< resultado;
}

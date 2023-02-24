#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float l1, l2, l3;
	
	cout << "informe o 1º lado: ";
	cin >> l1;
	
	cout << "informe o 2º lado: ";
	cin >> l2;
	
	cout << "informe o 3º lado: ";
	cin >> l3;
	
	if (l1 == l2 && l2 == l3) {
		cout << "o triângulo é equilátero." << endl;
	} else if (l1 == l2 || l1 == l3 || l2 == l3) {
		cout << "o triângulo é isósceles." << endl;
	} else {
		cout << "o triângulo é escaleno." << endl;
	}
}

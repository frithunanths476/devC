#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float l1, l2, l3;
	
	cout << "informe o 1� lado: ";
	cin >> l1;
	
	cout << "informe o 2� lado: ";
	cin >> l2;
	
	cout << "informe o 3� lado: ";
	cin >> l3;
	
	if (l1 == l2 && l2 == l3) {
		cout << "o tri�ngulo � equil�tero." << endl;
	} else if (l1 == l2 || l1 == l3 || l2 == l3) {
		cout << "o tri�ngulo � is�sceles." << endl;
	} else {
		cout << "o tri�ngulo � escaleno." << endl;
	}
}

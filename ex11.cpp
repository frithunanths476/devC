#include <iostream>
using namespace std;

main (){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int n1, n2, n3;
	
	cout << "informe o 1� n�mero: ";
	cin >> n1;
	
	cout << "informe o 2� n�mero: ";
	cin >> n2;
	
	cout << "informe o 3� n�mero: ";
	cin >> n3;
	
	if (n1>n2 && n1>n3){
		cout << "o 1� n�mero � o maior";
	}else if (n2>n1 && n2>n3){
		cout << "o 2� n�mero � o maior";
	}else {
		cout << "o 3� n�mero � o maior";
	}
}

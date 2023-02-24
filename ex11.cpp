#include <iostream>
using namespace std;

main (){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int n1, n2, n3;
	
	cout << "informe o 1º número: ";
	cin >> n1;
	
	cout << "informe o 2º número: ";
	cin >> n2;
	
	cout << "informe o 3º número: ";
	cin >> n3;
	
	if (n1>n2 && n1>n3){
		cout << "o 1º número é o maior";
	}else if (n2>n1 && n2>n3){
		cout << "o 2º número é o maior";
	}else {
		cout << "o 3º número é o maior";
	}
}

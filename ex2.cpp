#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
    cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float n1, n2;
	
	cout << "informe o 1º numero: ";
	cin >> n1;
	
	cout << "informe o 2º numero: ";
	cin >> n2;
	
	if (n1>n2){
		cout << "O 1º numero é maior que o 2º";
	} else if (n1==n2){
		cout << "iguais";
	}else{
		cout << "O 2º numero é maior que o 1º";
	}
	
}

#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
    cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float n1, n2;
	
	cout << "informe o 1� numero: ";
	cin >> n1;
	
	cout << "informe o 2� numero: ";
	cin >> n2;
	
	if (n1>n2){
		cout << "O 1� numero � maior que o 2�";
	} else if (n1==n2){
		cout << "iguais";
	}else{
		cout << "O 2� numero � maior que o 1�";
	}
	
}

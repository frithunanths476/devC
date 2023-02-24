#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float n1;
	
	cout << "informe um numero: ";
	cin >> n1;
	
	if (n1==0){
		cout << "É zero.";
	}else if (n1<0){
		cout << "É negativo";
	}else if (n1>0){
		cout << "É positivo";
	}
	
}

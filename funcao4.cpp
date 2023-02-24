#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int n;
	int valorInteiro = 0;
	int count = 0;
	
	do{
		cout << "informe um numero inteiro positivo: ";
		cin >> n;
		
		if(n>=0){
			valorInteiro += n;
			count++;
		}
		
	}while(n >= 0);
	
	if (count == 0){
		cout << "nenhum numero foi digitado" << endl;
	}else {
		cout << "O valor dos numeros digitados foi: " << valorInteiro << endl;
	}
}

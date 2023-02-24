#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int i1, i2;
	string n1, n2; 
	
	cout << "informe o nome da 1º pessoa: ";
	cin >> n1;
	
	cout << "informe a idade da 1º pessoa: ";
	cin >> i1;
	
	cout << "informe o nome da 2º pessoa: ";
	cin >> n2;
	
	cout << "informe a idade da 2º pessoa: ";
	cin >> i2;
	
	if (i1>i2){
		cout << "a 1º pessoa é mais velha que a 2º";
	}else{
		cout << "a 2º pessoa é mais velha que a 1º";
	}
}

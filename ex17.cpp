#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int i1, i2;
	string n1, n2; 
	
	cout << "informe o nome da 1� pessoa: ";
	cin >> n1;
	
	cout << "informe a idade da 1� pessoa: ";
	cin >> i1;
	
	cout << "informe o nome da 2� pessoa: ";
	cin >> n2;
	
	cout << "informe a idade da 2� pessoa: ";
	cin >> i2;
	
	if (i1>i2){
		cout << "a 1� pessoa � mais velha que a 2�";
	}else{
		cout << "a 2� pessoa � mais velha que a 1�";
	}
}

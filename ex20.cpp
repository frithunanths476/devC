#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	string senha, login;
	
	cout << "informe o seu login: ";
	cin >> login;
	
	cout << "informe a sua senha: ";
	cin >> senha;
	
	system ("cls");
	
	if (login==senha){
		cout << "Pode entrar";
	}else {
		cout << "Login e senha incorretos";
	}
}

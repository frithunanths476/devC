#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int combustivel, carro, porta, pessoa, bageiro;
	float valorCombustivel, valorTotal;
	
	cout << "1- para BMW\n";
	cout << "2- para AUDI\n";
	cout << "3- para FIAT\n";
	cout << "4- para FERRARI\n";
	cout << "R: ";
	cin >> carro;
	
	system ("cls");
	
	cout << "tem bagageiro?\n";
	cout << "1- para sim\n";
	cout << "2- para não\n";
	cout << "R: ";
	cin >> bageiro;
	
	system ("cls");
	
	cout << "tem 4 portas ou mais?\n";
	cout << "1- para sim\n";
	cout << "2- para não\n";
	cout << "R: ";
	cin >> porta;
	
	system ("cls");
	
	cout << "tem 2 pessoas ou mais?\n";
	cout << "1- para sim\n";
	cout << "2- para não\n";
	cout << "R: ";
	cin >> pessoa;
	
	system ("cls");
	
	cout << "qual o tipo do combustivel\n";
	cout << "1- para gasolina\n";
	cout << "2- para alcool\n";
	cout << "R: ";
	cin >> combustivel;
	
	system ("cls");
	
	if (carro==1 && combustivel==1){
		valorCombustivel = 9.8;
	}else if (carro==1 && combustivel==2){
		valorCombustivel = 8.9;
	}else if (carro==2 && combustivel==1){
		valorCombustivel = 12.8;
	}else if (carro==2 && combustivel==2){
		valorCombustivel = 10.9;
	}else if (carro==3 && combustivel==1){
		valorCombustivel = 26.8;
	}else if (carro==3 && combustivel==2){
		valorCombustivel = 24.9;
	}else if (carro==4 && combustivel==1){
		valorCombustivel = 13.8;
	}else if (carro==4 && combustivel==2){
		valorCombustivel = 12.9;
	}
	
	valorTotal = valorCombustivel;
	
	if (bageiro==1){
		valorTotal = valorTotal-0.2;
	}
	
	if (porta==1){
		valorTotal = valorTotal-0.5;
	}
	
	if (pessoa==1){
		valorTotal = valorTotal-1.2;
	}
	
	cout << "o valor antigo era " << valorCombustivel << " passou a ser " << valorTotal;
}

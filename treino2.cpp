#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int tamanhos, sabores, recheio, adicionais, adicionais2, pagamento, qtdeovo, recheioescolhido;
	float valorTotal, valorSabor, valorRecheio, valorRecheioEscolhido;
	
	cout << "Informe o tamanho do ovo\n";
	cout << "1- Pequeno\n";
	cout << "2- Médio\n";
	cout << "3- Grande\n";
	cout << "R: ";
	cin >> tamanhos;
	
	system ("cls");
	
	cout << "Informe o sabor do ovo\n";
	cout << "1- Chocolate preto\n";
	cout << "2- Chocolate branco\n";
	cout << "3- Chocolate ao leie\n";
	cout << "R: ";
	cin >> sabores;
	
	if (tamanhos == 1 && sabores == 1){
		valorSabor = 17.47;
	}else if (tamanhos == 1 && sabores == 2){
		valorSabor = 12.30;
	}else if (tamanhos == 1 && sabores == 3){
		valorSabor = 17.12;
	}else if (tamanhos == 2 && sabores == 1){
		valorSabor = 22.57;
	}else if (tamanhos == 2 && sabores == 2){
		valorSabor = 17.40;
	}else if (tamanhos == 2 && sabores == 3){
		valorSabor = 22.22;
	}else if (tamanhos == 3 && sabores == 1){
		valorSabor = 33.62;
	}else if (tamanhos == 3 && sabores == 2){
		valorSabor = 28.45;
	}else if (tamanhos == 3 && sabores == 3){
		valorSabor = 33.27;
	}
	
	valorTotal = valorSabor;
	
	cout << valorTotal;
	
	system ("cls");
	
	cout << "Informe se terá 2 recheios\n";
	cout << "1- sim\n";
	cout << "2- não\n";
	cout << "R: ";
	cin >> recheio;
	
	if (recheio == 1){
		cout << "informe os recheios\n";
		cout << "1- branco\n";
		cout << "2- preto\n";
		cout << "3- branco e preto\n";
		cin >> recheioescolhido;
		
		if (recheioescolhido == 1){
			valorRecheioEscolhido = 4.83;
		}else if (recheioescolhido == 2){
			valorRecheioEscolhido = 2.25;
		}else{
			valorRecheioEscolhido = (4.83+2.25)/2;
		}
	}
	
	system ("cls");
	
	cout << "Informe os adicionais\n";
	cout << "1- KitKat\n";
	cout << "2- MM's\n";
	cout << "R: ";
	cin >> adicionais;
	
	system ("cls");
	
	cout << "Informe\n";
	cout << "1- Presente\n";
	cout << "2- Entrega\n";
	cout << "R: ";
	cin >> adicionais2;
	
	system ("cls");
	
	cout << "Informe a forma de pagamento\n";
	cout << "1- Cartão de crédito\n";
	cout << "2- Pix\n";
	cout << "R: ";
	cin >> pagamento;
	
	system ("cls");
	
	
	

	if (adicionais == 1){
		valorTotal = valorTotal + 4.67;
	}else if (adicionais == 2){
		valorTotal = valorTotal + 5.43;
	}
	
	if (adicionais2 == 1){
		valorTotal = valorTotal + 2.50;
	}else if (adicionais2 == 2){
		valorTotal = valorTotal + 5.00;
	}
	
	if (pagamento == 1){
		valorTotal = valorTotal + 3.30;
	}else if (pagamento == 2){
		valorTotal = valorTotal * 1.10;
	}
	
	cout << "O seu ovo vai custar: \n" << valorTotal;
	
}

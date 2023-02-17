#include <iostream>
#include <stdlib.h> 

using namespace std;

main (){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	int nivel, tentativas, posicaoescondido, posicaoChutada, nArvores;
	
	cout << "1- para f�cil\n";
	cout << "2- para m�dio\n";
	cout << "3- para dif�cil\n";
	cout << "R: ";
	cin >> nivel;
	
	system ("cls");
	
	if (nivel == 1){
		tentativas = 15;
		cout << "Voc� tem " << tentativas << " tentativas\n";
	}else if (nivel == 2){
		tentativas = 10;
		cout << "Voc� tem " << tentativas << " tentativas\n";
	}else{
		tentativas = 4;
		cout << "Voc� tem " << tentativas << " tentativas\n";
	}
	
	cout << "Informe a qtde de arvores:";
	cin >> nArvores;
	
	for (int i=0; i<=nArvores; i++){
		cout << i<<" - ";
	}
	
	posicaoescondido = rand() % nArvores + 0;
	
	system("cls");
    
    int x;
    for (x=0; x<tentativas; x++){
    	cout << "Informe a posi��o que o Thanos se encontra" << endl;
    	cout << "Voc� usou " << x +1 << " de " << tentativas << " tentativas\n";
    	cin >> posicaoChutada;
    	if (posicaoChutada > posicaoescondido){
    		cout << "Thanos est� mais a esquerda\n\n";
		}else if(posicaoChutada < posicaoescondido){
			cout << "Thanos est� mais a direita\n\n";
		}else if (posicaoChutada == posicaoescondido){
			cout << "Voc� me pegou, Adios\n\n";
			break;
		}
	}
	
	if (x == tentativas){
		cout << "Voc� perdeu!!";
		cout << "Thanos estava na posi��o: "<< posicaoescondido;
	}
	
}

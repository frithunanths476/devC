#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	
	float p1,p2,result,presenca;
	
	cout << "Informe a porcentagem de presen�a de 0 a 100: ";
	cin >> presenca;
	
	if (presenca <= 25){
		cout << "Informe a primeira nota: ";
		cin >> p1;
		
		cout << "Informe a segunda nota: ";
		cin >> p2;
		
		result = (p1+p2) / 2;
		
		if (result >= 6){
			cout << "Voc� passou com a nota: " << result << " parab�ns";
		} else{
			cout << "Reprovou";
		}
	}else{
		cout << "reprovado por falta";
	}
	
}

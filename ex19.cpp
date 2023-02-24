#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float a1, a2, a3;
	const int angulo = 90;
	
	cout << "informe o 1º ângulo: ";
	cin >> a1;
	
	cout << "informe o 2º ângulo: ";
	cin >> a2;
	
	cout << "informe o 3º ângulo: ";
	cin >> a3;
	
	if (a1==angulo or a2==angulo or a3==angulo ){
		cout << "o triangulo é retangulo.";
	}else if (a1>angulo or a2>angulo or a3>angulo){
		cout << "o triangulo é obtusangulo";
	}else {
		cout << "o triangulo é acutangulo";
	}
}

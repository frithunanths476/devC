#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float a1, a2, a3;
	const int angulo = 90;
	
	cout << "informe o 1� �ngulo: ";
	cin >> a1;
	
	cout << "informe o 2� �ngulo: ";
	cin >> a2;
	
	cout << "informe o 3� �ngulo: ";
	cin >> a3;
	
	if (a1==angulo or a2==angulo or a3==angulo ){
		cout << "o triangulo � retangulo.";
	}else if (a1>angulo or a2>angulo or a3>angulo){
		cout << "o triangulo � obtusangulo";
	}else {
		cout << "o triangulo � acutangulo";
	}
}

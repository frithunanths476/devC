#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "**************************"<<endl;
	cout << "********Bem-Vindo*********"<<endl;
	cout << "**************************"<<endl;
	
	float p1,p2,result;
	
	cout << "Informe a primeira nota: ";
	cin >> p1;
	
	cout << "Informe a segunda nota: ";
	cin >> p2;
	
	result = (p1+p2) / 2;
	
	if (result >= 7){
		cout << "Voc? passou com a nota: " << result << " parab?ns";
	} else{
		cout << "Reprovou";
	}
}

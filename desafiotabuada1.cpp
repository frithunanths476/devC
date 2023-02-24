#include <iostream>
using namespace std;

main(){
	int numero;
	
	cout << "informe o numero para a tabuada: ";
	cin >> numero;
	
	for (int x = 0; x <= 10; x++){
		cout << numero << " x " << x << " = " << numero * x << endl;
	}
}

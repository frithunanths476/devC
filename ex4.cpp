#include <iostream>
using namespace std;

int main(){
	int num, i = 1;
	cout << "Digite um numero inteiro positivo: ";
	cin >> num;
	cout << "Numeros impares menores ou iguais a " << num << ": ";
	do{
		if (i % 2 != 0){
			cout << i << " ";
		}
		i++;
	}while (i <= num);
}

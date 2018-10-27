#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n1, n2, soma, sub, multi, div;
	cout << "Seja bem vindo a calculadora!" << endl;
	cout << "Digite o primeiro numero: " << endl;
	cin >> n1;
	cout << "Digite o segundo numero: "<< endl;
	cin >> n2;
	cout << "A soma e          : " << n1 + n2 << endl;
	cout << "A subtracao e     : " << n1 - n2 << endl;
	cout << "A multiplicacao e : " << n1 * n2 << endl;
	cout << "A divisao e       : " << n1 / n2 << endl;
	system("pause");
}

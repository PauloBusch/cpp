#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "Digite um numero no intervalo de 45 ate 72" << endl;
	int i = 0;
	cin >> i;
	if(i >= 45 && i <= 72){
		cout << "Obrigado por informar o numero no intervalo solicitado" << endl;
		if(i == 45 || i == 72)
			cout << "O valor de i e igual ao valor de al" << endl;
	}else
		cout << "O numero digitado nao esta no intervalo silicitado!" << endl;
	system("pause");
	return 0;
}

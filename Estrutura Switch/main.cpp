#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char c;
	cout << "Digite uma letra entre [a] e [f]" << endl;
	cin >> c;
	switch(c){
		case 'a':
		case 'A':
			cout << "Voce digitou a letra [a] ou [A]" << endl;
			break;
		case 'b':
		case 'B':
			cout << "Voce digitou a letra [b] ou [B]" << endl;
			break;
		case 'c':
		case 'C':
		case 'd':
		case 'D':
		case 'e':
		case 'E':
			cout << "Voce digitou a letra [c] ou [C], ou [d], ou [D], ou [e], ou [E]" << endl;
			break;		
		case 'f':
		case 'F':
			cout << "Voce digitou a letra [f] ou [F]" << endl;
			break;
		default:
			cout << "Voce não digitou uma letra valida!" << endl;
	}
	system("pause");
	return 0;
}

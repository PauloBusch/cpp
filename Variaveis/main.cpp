#include <iostream>
using namespace std;
int main()
{
	int    vidas    = 0      ;//10,20,35
	char   letra    = 'B'    ;//'B'
	double decimal  = 5.2    ;//2.5954879
	float  decimal2 = 5.2    ;//2.6
	bool   vivo     = true   ;//v/f
	string nome     = "Paulo";//texto
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << vidas    << "\n" << letra    << "\n" << decimal  << "\n" << decimal2 << "\n" << vivo     << "\n" << nome     << "\n";
	system("pause");
	return 0;
}

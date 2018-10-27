#include <iostream>
#include <stdlib.h>
using namespace std;
struct Pessoa{
	string nome;
	string sobrenome;
	int idade;
	string cpf;
};
int main()
{
	Pessoa p1, p2;
	p1.nome = "Fulano";
	p1.idade = 25;
	p1.cpf = "123.456.789-20";
	
	p2.nome = "Ciclano";
	p2.idade = 30;
	
	system("pause");
	return 0;	
}

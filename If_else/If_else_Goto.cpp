#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n1, n2, res;
	char opc;
	inicio:
	system("cls");
	cout << "Digite o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	res = n1 + n2;
	string Comando;
	stringstream Resultado;
	Resultado << res;
	Comando = "md " + Resultado.str();
	system(Comando.c_str());
	if(res >= 60){
		cout << "\nAluno aprovado\n";
	}else{
		if (res >= 40){
			cout << "\nAluno em recuperacao\n";
		}else{
			cout << "\nAluno reprovado!\n";
		}
	}
	cout << "\nDigitar outras notas?[S/N]: ";
	cin >> opc;	
	if(opc == 's' or opc == 'S'){
		goto inicio;
	}
	system("pause");
	return 0;
}

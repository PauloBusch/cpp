#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	double n1, n2, n3, n4;
	cout << "Digite sua primeira nota do semestre: >>> ";
	cin  >> n1;
	cout << "Digite sua segunda nota do semestre : >>> ";
	cin  >> n2;
	cout << "Digite sua terceira nota do semestre: >>> ";
	cin  >> n3;
	cout << "Digite sua quarta nota do semestre  : >>> ";
	cin  >> n4;
	double m = (n1 + n2 + n3 + n4)/4;	
	cout << "A sua media no semestre foi de: " << m << endl; 
	if(m < 7){
		cout << "Estude mais!, voce foi reprovado." << endl;
	}else{
		cout << "Parabens!, voce foi aprovado." << endl;
	}
	system("pause");
	return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n  = 0;
	cout << "Digite um mes: ";
	cin >> n;
	cout << "O mes de numero " << n << " e " << (
	(n==1 )?"Janeiro"  :
	(n==2 )?"Fevereiro":
	(n==3 )?"Marco"    :
	(n==4 )?"Abril"    :
	(n==5 )?"Maio"     :
	(n==6 )?"Junho"    :
	(n==7 )?"Julho"    :
	(n==8 )?"Agosto"   :
	(n==9 )?"Setembro" :
	(n==10)?"Outubro"  :
	(n==11)?"Novembro" :
	(n==12)?"Dezembro" :
		"Mes invalido"
	) << endl;
	/*switch(n){
		case 1:
			cout << "O mes de numero "<< n << " e Janeiro" << endl; 
			break;
		case 2:
			cout << "O mes de numero "<< n << " e Fevereiro" << endl; 
			break;
		case 3:
			cout << "O mes de numero "<< n << " e Março" << endl; 
			break;
		case 4:
			cout << "O mes de numero "<< n << " e Abri" << endl; 
			break;
		case 5:
			cout << "O mes de numero "<< n << " e Maio" << endl; 
			break;
		case 6:
			cout << "O mes de numero "<< n << " e Junho" << endl; 
			break;
		case 7:
			cout << "O mes de numero "<< n << " e Julho" << endl; 
			break;
		case 8:
			cout << "O mes de numero "<< n << " e Agosto" << endl; 
			break;
		case 9:
			cout << "O mes de numero "<< n << " e Setembro" << endl; 
			break;
		case 10:
			cout << "O mes de numero "<< n << " e Outubro" << endl; 
			break;
		case 11:
			cout << "O mes de numero "<< n << " e Novembro" << endl; 
			break;
		case 12:
			cout << "O mes de numero "<< n << " e Dezembro" << endl; 
			break;
		default:
			cout << "Mes invalido !!!! ";
	}
	*/
	
	system("pause");
	return 0;
}

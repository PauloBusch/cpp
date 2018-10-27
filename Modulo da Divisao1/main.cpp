#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n1, n2;
	n1 = 10;
	n2 = 3 ;
	int resto = n1 % n2;
	int div   = n1 / n2;
	cout << "O resto da divisao e: " << resto << endl;
	cout << "A divisao inteira e : " << div   << endl;

	cout << "O modulo entre 3 e 2 e: " << 3 % 2 << endl;
	cout << "O modulo entre 4 e 2 e: " << 4 % 2 << endl;
	cout << "O modulo entre 5 e 2 e: " << 5 % 2 << endl;
	cout << "O modulo entre 6 e 2 e: " << 6 % 2 << endl;
	cout << "O modulo entre 7 e 3.1 e: " << 7 % 3.1 << endl;
	system("pause");
	return 0;
}

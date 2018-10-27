#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int i = 0;
	cout << "Digite um valor: " << endl;
	cin >> i;
	cout << ((i <= 10)? "Menor do que dez":"Maior do que dez") << endl;
	system("pause");
	return 0;
}

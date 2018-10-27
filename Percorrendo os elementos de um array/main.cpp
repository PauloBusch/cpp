#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	double preco[10] = {};
	preco[0] = 14.55;
	preco[2] = 9.68 ;
	preco[3] = 1.1  ;
	preco[7] = 2    ;
	for(int i = 0;i<=9; i++){
		cout << preco[i] << endl;
	}
	system("pause");
	return 0;
}

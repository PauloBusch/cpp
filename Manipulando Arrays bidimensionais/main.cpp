#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int tabela[2][2];
	tabela[0][0] = 10;
	tabela[1][0] = 20;
	tabela[0][1] = 100;
	tabela[1][1] = 111;
	
	int tabela2[2][2] = {{10 ,100},{20 ,111}};
	for(int i = 0; i <2;i++){
		for(int j = 0;j<2;j++){
			cout << " {" << tabela[i][j] << "} ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

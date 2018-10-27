#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	double val[4];
	for(int i = 0;i<=4;i++){
		cout << "Informe o " << i+1 << " n: ";
		cin >> val[i];
	}
	double m = 0;
	for(int i2 = 0;i2<=4;i2++){
		m += val[i2];
	}
	cout << fixed;
	cout << "A media e: " << (m / 5) << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	bool b  = true;
	bool b2 = (1 == 0);
	cout << "O valor contido em b e igual a : " << b  << endl;
	cout << "O valor contido em b2 e igual a: " << b2 << endl;
	bool c  = 0;
	bool c2 = 1;
	cout << "O valor e: " << (c2 == true) << endl; 
	system("pause");
	return 0;
}

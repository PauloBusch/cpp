#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int i = 0;
	cout << "Incremento" << endl;
	cout << "Pre: " << ++i << endl;
	i = 0;
	cout << "Pos: " << i++ << endl;
	cout << "Decremento" << endl;
	i = 0;
	cout << "Pre: " << --i << endl;
	i = 0;
	cout << "Pos: " << i-- << endl; 
	system("pause");
	return 0;
}

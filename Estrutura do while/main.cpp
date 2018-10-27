#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "Looping do while" << endl;
	int i = 20;
	
	do{
		i++;
		cout << i << endl;
	}while(i>=10 && i <= 20);
	cout << "Looping while" << endl;
	int i2 = 20;
	
	while(i2>=10 && i2<=20){	
		i2++;
		cout << i2 << endl;
	}
	system("pause");
	return 0;
}

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	
	/* uma única tabuada
	int t = 0;
	cout << "Digite a tubuada que deseja ver: " << endl;
	cin >> t;
	
	for(int i = 1; i <= 10; i++){
		cout << t <<" X "<< setw(2)<<i << " = " << t * i << endl;
	}
	*/
	// tabuada toda
	cout << " -----------------------------------------------------------------------------------" << endl;
	for(int l = 1;l <= 10;l++){for(int t = 1; t <= 5 ; t++){
			cout << " | " << t << " X " << setw(2) << l << " = " << setw(2)<< t*l<<" | ";}
		cout << endl;}
	cout << " -----------------------------------------------------------------------------------" << endl;
	for(int l = 1;l <= 10;l++){for(int t = 6; t <= 10 ; t++){
			cout << " | " << t << " X " << setw(2) << l << " = " << setw(2)<< t*l<<" | ";}
		cout << endl;}
	cout << " -----------------------------------------------------------------------------------" << endl;
	system("pause");
	return 0;
}

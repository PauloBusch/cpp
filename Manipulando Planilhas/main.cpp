#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	double plan[5][6] = {};
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			plan[x][y] = (double)rand() + (RAND_MAX / 100);
		}
	}
	double t = 0;
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			plan[x][5] += plan[x][y];
		}
		t += plan[x][5];
	}
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 6;j++){
			string end = (j<4) ? ", " : 
				(j<5) ? " = " : "\n";
			cout << plan[i][j] << end;
		}
	}
	cout << "O valor da soma e: " << t << endl;
	system("pause");
	return 0;
}

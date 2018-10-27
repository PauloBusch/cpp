#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){	
	int n = 0;
	while(n != 4){
		cout << "Digite um número de 1 a 3. [4] Sair" << endl;
		cin >> n;
		if(n == 1){
			for(int i = 0; i < 5; i++){
				cout << "For: " << i << endl;
			}
		}else{
			if(n == 2){
				int i2 = 0;
				while(i2 < 5){
					i2++;
					cout << "While: " << i2 << endl;
				}
			}else{
				if(n == 3){
					int i3 = 0;
					do{
						i3++;
						cout << "Do while: " << i3 << endl;
					}while(i3 < 5);
				}
			}
		}
	}
	system("pause");
	return 0;
}

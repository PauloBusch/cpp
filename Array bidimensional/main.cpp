#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int matriz[3][4];
    cout << "digite os valores" << endl;
    for(int i = 0; i <3;i++){
        for(int j = 0; j <4;j++){
            cout << "N: "<< i*4+j+1 << ": ";
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i <3;i++){
        for(int j = 0; j <4;j++){
            cout << ((j==0)? " | ":"");
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}

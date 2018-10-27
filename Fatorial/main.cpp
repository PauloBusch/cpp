#include <iostream>
#include <stdlib.h>
using namespace std;
void fatorial(int c, int f=1);
int main()
{
    int fat;
    cout << "Deseja ver qual fatorial? ";
    cin >> fat;
    fatorial(fat);
    system("pause");
    return 0;
}
void fatorial(int c, int f){
    if(c > 1){
        f *= c;
        cout << c << " X ";
        fatorial(--c,f);
    }else{cout << "1 = " << f << endl;}
}

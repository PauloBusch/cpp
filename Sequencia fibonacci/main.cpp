#include <iostream>
using namespace std;
int fibonacci(int n);
//void fibonacci(int posi,int cont=1, int cont1=0);
int main()
{
    int posicao;
    cout << "Deseja ver ate qual posicao fibonacci? ";
    cin >> posicao;
    for(int i = 0; i< posicao;i++){cout << fibonacci(i+1) << " ";}
    return 0;
}
int fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
//2+1=3
//3+2=5
//4+3=7
//
/*void fibonacci(int posi, int cont, int cont1){
    if(posi>0){
        cout << cont << ". ";
        fibonacci(--posi,cont+cont1,cont);
    }else{
        cout << " Fim\n\n";
    }
}
*/

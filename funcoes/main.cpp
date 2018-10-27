#include <iostream>

using namespace std;
/*
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
*/
void tr(string tra[4]);
int main()
{
    string transp[4] = {"Carro","Moto","Barco","Aviao"};
    /*int res;
    texto();
    soma(15,5);
    res = soma2(3,5);
    cout << "O valor de res e: " << res << endl;*/
    tr(transp);
    return 0;
}
/*
void texto(){
    cout << "\nTeste\n";
}

void soma(int n1, int n2){
    cout << "A soma e: " << n1 + n2<< endl;
}

int soma2(int n1, int n2){
    return n1+n2;
}
*/
void tr(string tra[4]){
    for(int i = 0;i<4;i++){
        cout << tra[i] << endl;
    }
}

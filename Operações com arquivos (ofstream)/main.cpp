#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //ofstream - saída, ifstrem - entra, fstream - E/S
    ofstream arquivo;

    arquivo.open("P_Arquivo.txt",ios::app);//posiciona cursor no finaç ->,ios::app

    arquivo << "@echo Programa bat\n";
    arquivo << "@echo pause bat\n";

    arquivo.close();
    return 0;
}

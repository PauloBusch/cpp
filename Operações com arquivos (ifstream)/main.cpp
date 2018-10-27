#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //ofstream - saída, ifstrem - entra, fstream - E/S

    ofstream a_s;

    a_s.open("P_Arquivo.txt",ios::app);//posiciona cursor no finaç ->,ios::app

    a_s << "@echo Programa bat\n";
    a_s << "@echo pause bat\n";

    a_s.close();

    ifstream a_e;
    string linha;
    a_e.open("P_Arquivo.txt");
    if(a_e.is_open()){
        while(getline(a_e,linha)){
            cout << linha << endl;
        }
        a_e.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo!!" << endl;
    }
    return 0;
}

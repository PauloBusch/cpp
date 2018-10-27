#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    fstream arquivo;
    char opc = 's';
    string nome,linha;

    arquivo.open("Teste de escrita.txt",ios::out|ios::app);

    while((opc=='s')||(opc=='S')){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout <<"\nDigitar novo nome [s/n]?\n";
        cin >> opc;
        system("cls");
    }
    arquivo.close();
    arquivo.open("Teste de escrita.txt",ios::in);
    cout << "Nomes digitados" << endl;
    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout << linha<<endl;
        }
        arquivo.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo"<<endl;
    }
    return 0;
}

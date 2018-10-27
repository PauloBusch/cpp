#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
    Veiculo *v1=new Veiculo(1);
    Veiculo *v2=new Veiculo(2);
    Veiculo *v3=new Veiculo(3);
    //v1->velM = 300;
    //v1->setVM(500);
    v1->setLigado(1);
    v2->setLigado(1);
    v3->setLigado(1);

    cout << v1->getVM() << endl;
    cout << v2->getVM() << endl;
    cout << v3->getVM() << endl;

    if(v1->getLiga()){
        cout << "Veiculo 1 esta ligado: "<<endl;
    }else{
        cout << "Veiculo 1 esta desligado: "<<endl;
    }
    if(v2->getLiga()){
        cout << "Veiculo 2 esta ligado: "<<endl;
    }else{
        cout << "Veiculo 2 esta desligado: "<<endl;
    }
    if(v3->getLiga()){
        cout << "Veiculo 3 esta ligado: "<<endl;
    }else{
        cout << "Veiculo 3 esta desligado: "<<endl;
    }

    return 0;
}

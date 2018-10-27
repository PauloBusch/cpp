#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> cartas;
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");
    //cartas.size() == 0
    if(cartas.empty()){
        cout << "Pilha vazia\n";
    }else{
        cout << "Pilha com cartas\n";
    }
    do{
        cout << "Carta do topo: " << cartas.top() << endl;
        cout << "Tamanho da pilha: " << cartas.size() << endl;
        cartas.pop();
    }while(cartas.size()!=0);
    return 0;
}

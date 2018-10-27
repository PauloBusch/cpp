#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <string> cartas;
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");
    cout << "Tamanho da fila: " << cartas.size() << "\n\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n\n";
    while(!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
    }
    return 0;
}

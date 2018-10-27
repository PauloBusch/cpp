#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int v;
    char r;
    inicio:
    system("cls");
    cout << "Selecione uma transporte:\n";
    cout << "[1] Carro\n[2] Moto\n[3] Aviao\n[4] Helicoptero\n";
    cin >> v;
    switch(v){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(v){
                case 1:
                    cout << "Carro selecionado\n";
                break;
                case 2:
                    cout << "Moto selecionada\n";
            }
        break;
        case 3:
        case 4:
            cout << "\nTransporte aereo\n";
            switch(v){
                case 3:
                    cout << "Aviao selecionado\n";
                break;
                case 4:
                    cout << "Helicoptero selecionado\n";
            }
        break;
        default:
            cout << "Transporte Invalido!!!\n";
    }
    cout << "Deseja continuar?[S/N]: ";
    cin >> r;
    if(r == 's' || r == 'S'){
        goto inicio;
    }
    return 0;
}

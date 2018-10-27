#include <iostream>

using namespace std;

int main()
{
    string veicolo = "Carro";
    string *pv;
    pv = &veicolo;
    cout << endl << *pv << "\n" << pv;
    *pv="Moto";
    cout << endl << *pv << "\n" << pv;
    return 0;
}

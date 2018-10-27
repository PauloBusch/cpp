#include <iostream>
#include "Carro.h"
using namespace std;

int main()
{
    Carro *c1=new Carro();
    Carro *c2=new Carro();
    Carro *c3=new Carro();

    c1->F(3);
    c2->F(1);
    c3->F(2);

    c1->mostra();
    c2->mostra();
    c3->mostra();
    return 0;
}

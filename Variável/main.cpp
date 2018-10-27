#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel varInt e: " << varInt << endl;
    cout << "O valor da variavel c e: " << c << endl;
    cout << "O valor da variavel pFlutuante e: " << pFlutuante << endl;
    cout << endl;
    cout << "Mamoria da variavel varInt e: " << sizeof(varInt) << " bytes" << endl;
    cout << "Memoria da variavel c e: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da variavel pFlutuante e: " << sizeof(pFlutuante) << " bytes" << endl;
    system("pause");
    return 0;
}

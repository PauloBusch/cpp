#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int num = 30;

    cout << "Valor de num: " << setw(20) << setfill('_') << num << endl;
    /*
    float num = 5;
    printf("Valor de num: %07.1f",num);

    int num = 15;
    cout << "Valor de Num(decimal): " << num << endl;
    cout << "Valor de Num(hexadec): " << hex << num << endl;
    */
    return 0;
}

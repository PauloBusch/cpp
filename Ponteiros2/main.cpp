#include <iostream>

using namespace std;

int main()
{
    int *p;
    int vetor[10];
    p=&vetor[0]; // p = vetor;
    *p=10;
    cout << endl << p << " :" << vetor[0] << endl;


    *(p+=1);//p=&vetor[1]; // *(p++); // *(p+=1);
    *p = 20;
    cout << endl << p << " :" << vetor[1] << endl;

    *(p++); // p = vetor;
    *p=30;
    cout << endl << p << " :" << *p << endl;
    return 0;
}

#include <iostream>
#include <stdio.h> // fun��o gets();
#include <stdlib.h>
using namespace std;

int main()
{
    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);
    gets(vnome);

    cout << vnome;
    cout << sizeof(vnome);
    return 0;
}

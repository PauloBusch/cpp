#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    while(c++<20){
        cout << "Valor: " << c << endl;
        if(c==10)break;
    }
    cout << "\nRotina finalizada\n";
    return 0;
}

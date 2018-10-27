#include <iostream>

using namespace std;
void soma(int n1, int n2);
void soma();
int main()
{
    soma();
    soma(3,8);
    return 0;
}
void soma(int n1, int n2){
    int r;
    r = n1 + n2;
    cout << "\nA soma de " << n1 << " com " << n2 << " e igual = "<< r << endl;
}
void soma(){
    int n1, n2,r;
    n1 = 10;
    n2 = 20;
    r = n1 + n2;
    cout << "\nA soma de " << n1 << " com " << n2 << " e igual = "<< r << endl;
}

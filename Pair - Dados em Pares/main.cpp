#include <iostream>
#include <utility>
using namespace std;

int main()
{
    const int tam=3;

    pair <int,string> par;//pair <int,string> par(10,"Bruno");
    par.first=100;
    par.second="Paulo";
    cout << par.first << " : " << par.second << endl;
    return 0;
}

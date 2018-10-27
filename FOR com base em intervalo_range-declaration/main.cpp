#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x[10]{10,20,30,40,50,60,70,80,90,100};
    vector <int>v{10,20,30,40,50,60,70,80,90,100};
    //percorrer x
    //string nome="Paulo";
    const char* nome = "Paulo";
    for(int i=0;i<=sizeof(nome);i++){
        cout << nome[i];
    }
    cout << endl;
    for(auto i:v){
        cout << i << endl;
    }
    /*for(int i=0;i<sizeof(x)/4;i++){
        cout << x[i] << endl;
    }*/
    return 0;
}

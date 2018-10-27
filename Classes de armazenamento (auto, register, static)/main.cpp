#include <iostream>
#include <vector>
using namespace std;
auto soma(double n1,double n2)->double{
    return n1+n2;
}
void somador();
string teste();
int main()
{
    /*
    auto num = 10;
    auto nome = "Paulo";
    auto valor = 10.5;
    auto res=soma(10.8,5.15);
    //auto res=teste();
    cout << res << endl;

    vector<int>v{10,20,30,40,50,60,70};
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << endl;
        }
    //register int cont;
    int cont;
    for(cont=0;cont < 10000000;cont++){
       cout<<cont<<endl;

    }*/
    somador();
    somador();
    somador();
    somador();
    somador();
    somador();
    return 0;
}
string teste(){
    return "Teste de funcao";
}
void somador(){
    //auto i = 0;
    static auto i = 0;
    i++;
    cout << i<< endl;
}

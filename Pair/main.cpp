#include <iostream>
#include <stdlib.h>
#include <utility>
#include <vector>
//#define tam 3
using namespace std;
int main(){
    const int tam = 3;
    vector<pair<int,string> > produtos;

    produtos.push_back(make_pair(10,"Mouse"));
    produtos.push_back(make_pair(20,"Monitor"));
    produtos.push_back(make_pair(30,"Teste"));

    for(auto i:produtos){
        cout<<i.first<<" - "<<i.second<<endl;
    }
    /*for(int i = 0; i< produtos.size();i++){
        cout << produtos[i].first << " - " << produtos[i].second << endl;
        /*
        cout << par[i].second.first;
        cout << " - ";
        cout << par[i].second.second;
        */
    /*pair<int,pair <string,double>> par[tam];
    par[0]=make_pair(10,make_pair("Lucas",10.3));
    par[1]=make_pair(12,make_pair("Pedro",12.5));
    par[2]=make_pair(15,make_pair("Joao",15.8));
    /*pair<int,string> par[tam];//pair<int,string> par(10,"Paulo");
    par[0]=make_pair(10,"Bruno");
    par[1]=make_pair(12,"teste");
    par[2]=make_pair(15,"Lucas");*/
    /*par[0].first = 100;
    par[0].second = "Paulo";
    par[1].first = 20;
    par[1].second = "Lucas";
    par[2].first = 16;
    par[2].second = "Pedro";*/

    system("pause");
    return 0;
}

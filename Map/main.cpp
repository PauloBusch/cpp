#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;
int main(){
    map<int,string>prod;//map<int,string>prod;
    map<int,string>::iterator itmap;
    prod.insert(pair<int,string>(0,"Teste"));
    prod.insert(pair<int,string>(1,"Caixa"));
    prod.insert(pair<int,string>(2,"Mouse"));
    prod.insert(pair<int,string>(3,"Monitor"));
    prod.insert(pair<int,string>(4,"Teclado"));
    prod.insert(pair<int,string>(5,"Camera"));
    //map['a']
    /*
    prod[0]="Teclado";
    prod[1]="Mouse";
    prod[2]="Monitor";
    prod[3]="CX.Som";*/
    prod.erase(prod.find(1),prod.find(3));//deleta chave
    //prod.clear();//deleta tudo
    //itmap=prod.find(0);
    /*if(itmap==prod.end()){
        cout<< "Produto nao encontrado"<<endl;
    }else{
        cout<<  "Produto em estoque"   <<endl;
        cout << "Codigo: "<<itmap->first<<", Valor: "<< itmap->second<<endl;
    }*/
    for(auto x:prod){
        cout << x.first << " - " << x.second <<endl;
    }
    system("pause");
    return 0;
}

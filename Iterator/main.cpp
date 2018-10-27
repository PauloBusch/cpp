#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string>produtos;
    vector<string>::iterator it;
    produtos.push_back("mouse");
    produtos.push_back("teclado");
    produtos.push_back("monitor");
    produtos.push_back("gabinete");
    produtos.push_back("cx.som");
    it=produtos.end();//it=produtos.begin();

    //advance
    //next
    //prev
    //advance(it,1);

    //cout << *prev(it,1) << endl;

    //cout << *it << endl;

    for(it=produtos.begin();it!=produtos.end();it++){
        cout << *it<< endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct pessoa{
    string nome;
    int idade;
};
class Veiculo{
public:
    int tipo;
    string nome;
    /*Veiculo(int tp, string no){
        tipo = tp;
        nome = no;
    }*/
};
int main()
{
    int vetor[]={1,2,3,4,5,6,7,8,9};
    int num{10};
    string nome{"Paulo"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG","Belo Horizonte"}};

    pessoa p1{"Bruno",38};
    pessoa p2{"Paulo",18};
    Veiculo v1{1,"Strada"};
    //===========imprime===============
    cout << num << endl;
    cout << nome << endl;

    for(vector<int>::iterator it=valores.begin();it!=valores.end();it++){cout << *it << endl;}
    for(map<string,string>::iterator it=capitais.begin();it!=capitais.end();it++){cout << it->first  << " - " << it->second << endl;}

    cout << p1.nome << " - " << p1.idade << endl;
    cout << p2.nome << " - " << p2.idade << endl;

    cout << v1.nome << " - " << v1.tipo<<endl;
    for(int i = 0;i<sizeof(vetor)/4;i++)
        cout << vetor[i];

    return 0;
}

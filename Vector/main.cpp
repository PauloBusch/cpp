#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;
    vector<int> num2;
    int tam, tam2, i;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);

    num.insert(num.end()-1,888);//num.insert(num.begin()+3,888);//-1
    num.erase(num.end()-2);
    tam = num.size();
    tam2 = num2.size();

    cout << "Primeiro valor num: " << num.front() << endl;
    cout << "Ultimo valor num: " << num.back() << endl;
    cout << "Valor do meio: " << num.at(tam/2) << endl;

    //num.swap(num2);
    for(i=0;i<tam;i++){
        cout << num[i] << endl;
    }
    cout << endl;
    for(i=0;i<tam2;i++){
        cout << num2[i] << endl;
    }
    while(!num.empty()){
        num.pop_back();
    }
    cout << "Novo tamanho de num: " << num.size() << endl;
    return 0;
}

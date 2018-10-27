#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> aula,teste;
    int tam = 10;
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    list <int>::iterator it;

    for(int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    /*
    it = aula.begin();
    advance(it,7);

    aula.insert(it,0);
    */
    it =aula.begin();
    advance(it,3);
    aula.insert(it,0);
    aula.erase(--it);
    //aula.clear();
    aula.merge(teste);
    cout << "Tamanho da lista: " << aula.size() << endl;

    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }
    cout << "\n\nTamanho da lista: " << aula.size() << endl;

    return 0;
}

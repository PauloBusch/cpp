#include <iostream>
#include <memory>
class Carro{
public:
    int velMaxima;
    int potencia;
    const char* nome;
    Carro(const char* n, int p):nome(n),potencia(p){//lista de inicialização
        //this->nome = n;
        //this->potencia = p;
        if(potencia<100){
            this->velMaxima = 120;
        }else if (potencia<200){
            this->velMaxima = 220;
        }else{
            this->velMaxima = 350;
        }
    }
};
using namespace std;
int main(){
    unique_ptr<Carro>c1(new Carro{"Paulo",50});//Carro c1{"Paulo",80};
    //inicialização uniforme//usa-se seta por ter new
    cout << "Nome: " << c1->nome
    << " Potencia: " << c1->potencia
    << " Velocidade maxima: " << c1->velMaxima << endl;
    Carro c2{"Motana",400};//usa-se ponto por n ter new
    cout << "Nome: " << c2.nome
    << " Potencia: " << c2.potencia
    << " Velocidade maxima: " << c2.velMaxima << endl;

    return 0;
}

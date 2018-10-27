#include <iostream>
#include <memory>
class Carro{
private:
    int velMaxima;//n precisa incluir função para setar
    /*
    void set_velocidade(int vm){
        this->velMaxima = vm;
    }*/
public:
    int potencia;
    const char* nome;
    int get_velMaxima(){
        return velMaxima;
    }
    Carro(const char* n, int p):nome(n),potencia(p){//lista de inicialização
        //this->nome = n;
        //this->potencia = p;
        if(potencia<100){
            //this->set_velocidade(120);
            this->velMaxima = 120;
        }else if (potencia<200){
            //this->set_velocidade(220);
            this->velMaxima = 220;
        }else{
            //this->set_velocidade(350);
            this->velMaxima = 350;
        }
    }
};
using namespace std;
int main(){
    unique_ptr<Carro>c1(new Carro{"Paulo",500});//Carro c1{"Paulo",80};
    //inicialização uniforme//usa-se seta por ter new
    cout << "Nome: " << c1->nome
    << " Potencia: " << c1->potencia
    << " Velocidade maxima: " << c1->get_velMaxima() << endl;

    Carro c2{"Motana",50};//usa-se ponto por n ter new
    //c2.set_velocidade(900);
    //c2.velMaxima = 500;
    cout << "Nome: " << c2.nome
    << " Potencia: " << c2.potencia
    << " Velocidade maxima: " << c2.get_velMaxima()
    << endl;

    return 0;
}

#include <iostream>
class Carro{
private:
    int velMaxima;
    const char* nome;
public:
    int potencia;
    int get_velocidadeMaxima(){
        return this-> velMaxima;
    }
    const char* get_nome(){
        return this-> nome;
    }
    //sobrecarga de metodos
    Carro(){
        velMaxima = 120;
        potencia = 85;
        nome  = "Popular";
    }
    Carro(int p, const char* n):potencia(p),nome(n){
        if(p<100){
            this->velMaxima = 120;
        }else if(p<200){
            this->velMaxima = 240;
        }else{
            this->velMaxima = 360;
        }
    }
    //fim sobrecarga
};
using namespace std;

int main()
{
    Carro c1;
    cout << c1.get_nome() << " - " << c1.potencia << " - " << c1.get_velocidadeMaxima() << endl;

    Carro c2{180, "Montana"};
    cout << c2.get_nome() << " - " << c2.potencia << " - " << c2.get_velocidadeMaxima() << endl;

    Carro c3{300, "Esportivo"};
    cout << c3.get_nome() << " - " << c3.potencia << " - " << c3.get_velocidadeMaxima() << endl;

    return 0;
}

#include <iostream>

using namespace std;
class Veiculo{
private:
    int velMaxima;
    int potencia;
public:
    int rodas;
    const char* nome;
protected:
    int portas;
    const char* cor;
};
class Carro:public Veiculo{
public:
    Carro(){
        //velMaxima = 180;
        //potencia = 150;
        rodas = 4;
        nome = "Carro";
        portas = 4;
        cor = "vermelho";

        //cout << velMax << endl;
        //cout << potencia << endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};
class Moto{
public:
    Carro c;
    Moto(){
        //velMaxima = 250;
        //potencia = 500;
        c.rodas = 2;
        c.nome = "Moto";
        //c.portas = 0;
        //c.cor = "preto";

        //cout << velMax << endl;
        //cout << potencia << endl;
        cout << c.rodas << endl;
        cout << c.nome << endl;
        //cout << c.portas << endl;
        //cout << c.cor << endl;
    }
};
int main()
{
    Carro v1;
    cout << endl << endl;
    Moto v2;
    return 0;
}

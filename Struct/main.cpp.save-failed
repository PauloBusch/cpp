#include <iostream>

using namespace std;
struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvel){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        velMax=stvel;
        vel = 0;
    }
    void mostra(){
        cout << "Nome.............: " << nome << endl;
        cout << "Cor..............: " << cor << endl;
        cout << "Potencia.........: " << pot << endl;
        cout << "Velocidade Atual.: " << vel << endl;
        cout << "Velocidade Maxima: " << velMax << endl<< endl;
    }
    void mudaVel(int mv){
        vel=mv;
        if(vel > velMax){
            vel = velMax;
        }
        if(vel < 0){
            vel = 0;
        }
    }
    };
int main()
{
    Carro *carros=new Carro[5];
    Carro car1,car2,car3,car4,car5;

    carros[0]=car1;carros[1]=car2;carros[2]=car3;carros[3]=car4;carros[4]=car5;

    carros[0].insere("Tornado","Vermelho",450,350);
    carros[1].insere("Luxo","Preto",250,260);
    carros[2].insere("Familia","Prata",150,180);
    carros[3].insere("Trabalho","Branco",80,120);
    carros[4].insere("Padrao","Cinza",100,150);

    for(int i = 0; i < 5;i++){
            carros[i].mostra();
    }
    /*
    car1.insere("Tornado","Vermelho",450,350);
    //car2.insere("Luxo","Preto",250,260);
    car1.mostra();
    car1.mudaVel(400);
    car1.mostra();
    //car2.mostra();


    Carro car1, car2;
    car1.nome = "Tornado";
    car1.cor = "vermelho";
    car1.pot = 450;
    car1.velMax = 350;
    car2.nome = "Strada";
    car2.cor = "Preto";
    car2.pot = 300;
    car2.velMax = 260;
    cout << "Nome......: " << car2.nome << endl;
    cout << "Cor.......: " << car2.cor << endl;
    cout << "Potencia..: " << car2.pot << endl;
    cout << "Velocidade: " << car2.velMax << endl;
    */
    return 0;
}

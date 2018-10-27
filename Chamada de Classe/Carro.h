#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class Carro{
public:
    int vel = 0;
    int velM;
    std::string tipo;
    F(int tp);
    void mostra();
private:

};

Carro::F(int tp){
    if(tp==1){
        tipo = "Celta";
        velM = 100;
    }else if(tp==2){
        tipo = "Strada";
        velM = 200;
    }else if(tp==3){
        tipo = "Gol";
        velM = 150;
    }
}
void Carro::mostra(){
    std::cout << "Tipo.............:"<< tipo << std::endl;
    std::cout << "Velocidade Atual.:"<< vel  << std::endl;
    std::cout << "Velocidade Maxima:"<< velM << std::endl;
    std::cout << "--------------------------" << std::endl;
}
#endif // CARRO_H_INCLUDED

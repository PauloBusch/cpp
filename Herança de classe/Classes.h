#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
class Veiculo{
public:
    int  vel;
    int  blind;
    int  rod;
    void setTipo(int t);
    void setVM(int VM);
    void setArma(bool AR);
    void imp();
private:
    int tipo;
    int velM;
    bool Arma;
};
void Veiculo::setTipo(int t){
    tipo=t;
}
void Veiculo::setVM(int VM){
    velM=VM;
}
void Veiculo::setArma(bool AR){
    Arma=AR;
}
void Veiculo::imp(){
    std::cout << "Tipo veiculo.....: " << tipo << std::endl;
    std::cout << "Velocidade Maxima: " << velM << std::endl;
    std::cout << "Rodas............: " << rod  << std::endl;
    std::cout << "Blindagem........: " << blind<< std::endl;
    std::cout << "Armamento........: " << Arma << std::endl;
    std::cout << "---------------------" << std::endl;
}
class Moto:public Veiculo{
public:
    Moto();
};
Moto::Moto(){
    vel   = 0;
    blind = 0;
    rod   = 2;
    setTipo(1);
    setVM(120);
    setArma(false);
}
class Carro:public Veiculo{
public:
    Carro();
};
Carro::Carro(){
    vel   = 0;
    blind = 0;
    rod   = 4;
    setTipo(2);
    setVM(180);
    setArma(false);
}
class Tanque:public Veiculo{
public:
    Tanque();
};
Tanque::Tanque(){
    vel   = 0;
    blind = 1;
    rod   = 8;
    setTipo(4);
    setVM(200);
    setArma(true);
}
#endif // CLASSES_H_INCLUDED

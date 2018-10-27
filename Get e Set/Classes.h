#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int v;
    int tipo;
    Veiculo(int tp);
    int getVM();
    bool getLiga();
    void setLigado(int l);
private:
    std::string nome;
    void setVM(int vm);
    int velM;
    bool ligado;
};
Veiculo::Veiculo(int tp){
     if(tp==1){
            nome = "Carro";
            //velM = 200;
            setVM(200);
     }else if(tp==2){
            nome = "Aviao";
            //velM = 800;
            setVM(800);
     }else if(tp==3){
            nome = "Navio";
            //velM = 120;
            setVM(120);
     }
     setLigado(0);
}
int Veiculo::getVM(){
    return velM;
}
void Veiculo::setVM(int vm){
    velM = vm;
}
bool Veiculo::getLiga(){
    return ligado;
}
void Veiculo::setLigado(int l){
    if(l==1){
        ligado = true;
    }else if(l==0){
        ligado = false;
    }
}
#endif // CLASSES_H_INCLUDED

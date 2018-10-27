#include <iostream>

using namespace std;
class Veiculo{
private:
    const char* nome;
    const char* cor;
public:
    int velMaxima;
    int rodas;
    void set_nome(const char* n){
        nome=n;
    }
    const char* get_nome(){
        return nome;
    }
    void set_cor(const char* c){
        cor = c;
    }
    const char* get_cor(){
        return cor;
    }
    virtual void imp(){ // sera sobreescrito em munição [virtual]
        cout << "Nome...: " << nome << endl;
        cout << "Cor....: " << cor << endl;
        cout << "Rodas..: " << rodas << endl;
        cout << "Vel Max: " << velMaxima << endl <<endl;
    }
};
class Carro:public Veiculo{
public:
    Carro(){
        velMaxima=160;
        rodas=4;
        set_nome("Carro");
        set_cor("Branco");
    }
};
class Moto:public Veiculo{
public:
    Moto(){
        velMaxima=200;
        rodas=2;
        set_nome("Moto");
        set_cor("Preto");
    }
};
class Militar:public Veiculo{
public:
    int qtdMunicao;
    bool armamento;
    Militar(bool arma, int muni):armamento(arma),qtdMunicao(muni){
        velMaxima=150;
        rodas=6;
        set_nome("Tanque");
        set_cor("Verde");
        if(arma){
            qtdMunicao = muni;
        }else{
            qtdMunicao = 0;
        }
    }
    void imp() override{ // sobreescreve munição [override]
        cout << "Nome.......: " << get_nome() << endl;
        cout << "Cor........: " << get_cor() << endl;
        cout << "Rodas......: " << rodas << endl;
        cout << "Vel Max....: " << velMaxima << endl;
        cout << "Armamento..: " << armamento << endl;
        cout << "Municao....: " << qtdMunicao << endl << endl;
    }
};
int main()
{
    Carro c1;
    c1.imp();

    Moto m1;
    m1.imp();

    Militar mi{false,500};
    mi.imp();

    Militar ma{true,100};
    ma.imp();

    return 0;
}

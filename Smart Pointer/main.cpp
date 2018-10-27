#include <iostream>
#include <memory>
class Carro{
public:
    int vel =0;
    int getVel(){
        return vel;
    };
    void setVel(int v){
        this->vel=v;
    }
};
using namespace std;
int main()
{
    unique_ptr<Carro>c1(new Carro);
    unique_ptr<Carro>c2(new Carro);
    c1->setVel(10);
    c2->setVel(50);
    cout << "Velocidade: " << c1->getVel() << endl;
    cout << "Velocidade: " << c2->getVel() << endl;
    /*
    Carro *c1=new Carro();
    cout << c1->get_vel()<<endl;
    delete c1;
    /*
    string* str=new string("Teste");
    //shared_ptr<int>pnum(new int());
    //shared_ptr<int>pnum2=pnum;
    //int *pnum=new int();
    cout<<*str << " - Tamanho: " << str->size()<< " - "<< &str<<endl;
    delete str;
    //delete pnum;
    return 0;*/
}

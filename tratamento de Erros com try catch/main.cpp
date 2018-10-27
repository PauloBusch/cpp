#include <iostream>
//#include <vector>
//#include <stdexcept>
using namespace std;

double div(double, double);

int main()
{
    //vector<int>num(6);
    double n1, n2;
    cin >> n1 >> n2;
    try{
        //num.at(5)=10;
        //cout << num[5]<<endl;
        cout << div(n1,n2);
    }catch(const char* msg){//}catch(exception& e){
        cout << "Erro: " << msg << endl;
    }
    return 0;
}
double div(double n1, double n2){
    if(n2 == 0){
        throw "Erro de divisao por zero"; // mensagem de retorno msg
    }
    if(n1>9){
        throw "N1 precisa ser menor que 10";
    }
    return n1/n2;
}


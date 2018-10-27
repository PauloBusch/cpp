#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int vetor[] = {10,20,30,40,50,60,70};
    for(int i = 0;i < sizeof(vetor)/4; i++){
        cout << vetor[i] << endl;
    }
    cout << sizeof(vetor) << "\n";
    system("pause");
    return 0;
}

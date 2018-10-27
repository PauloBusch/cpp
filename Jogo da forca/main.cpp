#include <iostream>
#include <stdlib.h>
using namespace std;
    int i;
    char r;
    char palavra[30];
    char layout[10][sizeof(palavra)*3+12] = {};
    int tentativas = 0;
    int acertos = 0;
    int pontos = 0;
    int tam  = 0;

int tela(){
    //==========Verifica a letra digitada==============
    int aux = 0;
    for(i = 0;i < tam;i++){
        if(palavra[i] == toupper(r)){
            if(layout[7][i*3+16] != palavra[i]){
                if (aux == 0){
                        acertos += 1;aux = 1;
                }
                pontos += 1;
            }
            layout[7][i*3+16] = palavra[i];
        }
    }
    if(tentativas-acertos<6){
    for(i = 0; i < 10;i++){layout[0][i] = '=';}
    for(i = 1; i < 3;i++){layout[i][0] = '|';layout[i][10] = '|';}
    layout[3][0] = '|';
    for(i= 9;i<=11;i++){layout[3][i] = '=';}
    switch(tentativas-acertos){
           case 1: layout[4][10] = 'o';break;
           case 2: layout[5][10] = '0';break;
           case 3: layout[5][9] = '/';break;
           case 4: layout[5][11] = '|';break;
           case 5: layout[6][9] = '/';
    }

    }else{layout[6][11] = '!';}
    for(i= 4;i<7;i++){layout[i][0] = '|';}
    for(i = 0; i < 15;i++){layout[7][i] = '=';}
    for(int x = 0; x < 10;x++){//imprime layput
    for(i = 15; i < tam*3+15;i+=3){layout[7][i] = '[';layout[7][i+2] = ']';}
    for(int y = 0; y < tam*3+15;y++){//imprime layput
           cout << layout[x][y];
          }
        cout << endl;
    }
    //alerta
    if(tentativas-acertos>=6){
        cout << endl << "========VOCE PERDEU!!!=========" << endl<<endl;
    }else{
        if(tam <= pontos){
            cout << endl << "========VOCE GANHOU, PARABENS!!!=========" << endl<<endl;
        }
    }
}
int main()
{
    do{
        // reseta variáveis
        tentativas = 0;
        acertos = 0;
        pontos = 0;
        tam  = 0;
        for(i = 0; i<30;i++){palavra[i]={};}

        cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: ";
        cin >> palavra;
        for(i = 0; palavra[i];i++){//deixa tudo maiusculo
            palavra[i] = toupper(palavra[i]);
            tam += 1;
        }
        do{
            system("cls");
            tela();
            cout << "Digite uma letra. Para sair tecle [0]/Para digitar outra palavra secreta digite [1]: ";
            cin >> r;
            tentativas += 1;
            system("cls");
        }while(r != '0' && r != '1');
    }while(r == '1');
    system("pause");
    return 0;
}

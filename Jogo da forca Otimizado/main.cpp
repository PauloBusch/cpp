#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
//Funções
void imprime(int,int, char molde_boneco[]);
void altera_boneco(int, char molde_boneco[]);
char opcoes_usuario();
int verifica_palavra(char);
void inicializa_letras();
void inclui_letras(char,int);
int status_jogo(int,char molde_boneco[]);
void alerta(string,int,char molde_boneco[]);
//Variáveis globais
int tamanho_palavra,tamanho_pontos,layout_linhas;
string palavra_secreta;
vector <string> tela_boneco{
    "___________",
    "|          |",
    "|          |",
    "|         _|_",
    "|            ",
    "|            ",
    "|            ",
    "_______",//trecho para inserir letras
    "\n"};

int main()
{
    char teclado,molde_boneco[6]={'/','\\','\\','/','0','o'};
    int chances;
    layout_linhas=tela_boneco.size();
    do{
        //resetar variáveis
        //system("cls");
        cout << "Solicite a seu amigo para tapar os olhos.\nDigite a palavra secreta: ";
        cin >> palavra_secreta;
        chances = 6;
        tamanho_pontos = 0;
        tamanho_palavra = palavra_secreta.length();
        inicializa_letras();
        for(int i = 4;i<7;i++){
            for(int j = 10;j<13;j++){
                tela_boneco[i][j]=' ';// reseta boneco
            }
        };
        do{
            imprime(layout_linhas,chances,molde_boneco);//retorna linhas(sizeof(tela_boneco)/24)
            teclado = opcoes_usuario();
            if(verifica_palavra(teclado)==0){
                chances--;
            };
            if(status_jogo(chances,molde_boneco)!=0){
                    teclado = '1';//força reinicio do jogo mediante alteração de status
                    break;
            };
        }while(teclado!='0' && teclado!='1');
    }while(teclado == '1');
    system("cls");
    cout << "Voce escolheu sair";
    return 0;
}
void imprime(int linhas,int chances, char molde_boneco[]){
    altera_boneco(chances,molde_boneco);
    system("cls");
    for(int i = 0;i<linhas;i++){
        cout << tela_boneco[i]<< endl;
    }
}
void altera_boneco(int ch, char molde[]){
    switch(ch){
       case 5:tela_boneco[4][11]=molde[ch];break;
       case 4:tela_boneco[5][11]=molde[ch];break;
       case 3:tela_boneco[5][10]=molde[ch];break;
       case 2:tela_boneco[5][12]=molde[ch];break;
       case 1:tela_boneco[6][12]=molde[ch];break;
       case 0:tela_boneco[6][10]=molde[ch];
    };
}
char opcoes_usuario(){
    string opc;
    cout << "Digite uma letra: \n" <<
            "______________________________\n" <<
            "|[1] Esconder outra palavra  |\n" <<
            "|[0]_Sair____________________|\n";
    cin >> opc;
    return opc[0];
}
int verifica_palavra(char letra){
    letra = toupper(letra);
    int acertou = 0;
    for(int i= 0;i<tamanho_palavra;i++){
            if(toupper(palavra_secreta[i])==letra){
                inclui_letras(letra,i);//0
                palavra_secreta[i]=' '; //bloqueio de repeticao
                acertou++;
                tamanho_pontos++;
            };
    }
        return acertou;//quando o usuário erra a letra
}
void inicializa_letras(){
	tela_boneco[7]="_______";
    for(int i = 0;i<tamanho_palavra;i++){
        tela_boneco[7]+="[-]";
    }
}
void inclui_letras(char letra,int posicao){
    int indice = 8+posicao*3;//indice para adicao da letra
    tela_boneco[7][indice]=letra;
}
int status_jogo(int chances, char molde_boneco[]){//retorno 0=nada/1=derrota/2=vitoria
    system("cls");
    if(tamanho_pontos==tamanho_palavra){
        alerta("Vitoria",chances,molde_boneco);
        return 2;
    }else if(chances==0){
        alerta("Derrota",chances,molde_boneco);
        return 1;
    }
    return 0;
}
void alerta(string m, int chances,char molde_boneco[]){
    imprime(layout_linhas,chances,molde_boneco);//atualiza layout
    cout << "\n\n______________________________\n" <<
                "|********* "<<m<<" ********* |\n" <<
                "|____________________________|\n\n";
}

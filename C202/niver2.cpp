// Faça um programa onde o usuário entre com o mês do aniversário (1 a 12) e seu nome completo. 
// Mostre na saída o nome do mês correspondente por extenso. 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int mes;
    char nome[30];

    cin>>mes>>nome;
    switch(mes){
        case 1:
        cout<<"janeiro";
            break;
        case 2:
        cout<<"fevereiro";
            break;
        case 3:
        cout<<"março";
            break;
        case 4:
        cout<<"abril";
            break;
        case 5:
        cout<<"maio";
            break;
        case 6:
        cout<<"junho";
            break;
        case 7:
        cout<<"julho";
            break;
        case 8:
        cout<<"agosto";
            break;
        case 9:
        cout<<"setembro";
            break;
        case 10:
        cout<<"outubro";
            break;
        case 11:
        cout<<"novembro";
            break;
        case 12:
        cout<<"dezembro";
            break;
    }


    return 0;
}
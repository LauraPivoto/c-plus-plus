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
    switch(mes):
        case 1:
        cout<<"janeiro";
        case 2:
        cout<<"fevereiro";
        case 3:
        cout<<"março";
        case 4:
        cout<<"abril";
        case 5:
        cout<<"maio";
        case 6:
        cout<<"junho";
        case 7:
        cout<<"julho";
        case 8:
        cout<<"agosto";
        case 9:
        cout<<"setembro";
        case 10:
        cout<<"outubro";
        case 11:
        cout<<"novembro";
        case 12:
        cout<<"dezembro";


    return 0;
}
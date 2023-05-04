Dado um texto, mostre ele ao contrário.
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int tam, p;
    char texto[50];
    cin.getline(texto, 50);

    tam = strlen(texto);
    char texto2[tam]

    for(p=tam; p>=0; p--){
        texto2[0]=texto[tam];
        texto2++;
        tam--;
    }
    

    return 0;
}
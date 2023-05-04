#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    float entrada, soma=0.0, cont=0;
    cin>>entrada;
    while(entrada>=0){
        cont++;
        soma += entrada;
        cin>>entrada;
    }
    float media = soma/cont;
    cout<<media<<endl;

    return 0;
}
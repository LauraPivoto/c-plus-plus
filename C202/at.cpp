#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int entrada, soma =0;
    cin>>entrada;
    do{
        soma = soma+entrada;
        cin>>entrada;
    } while(entrada!=-1);
    cout<<soma;

    return 0;
}
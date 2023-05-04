#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    float altura, sexo, nhomens, nmulher,somaalt,  menor = 500;
    cin>>altura;
    while(altura>0){
        cin>>sexo;
        if(altura<menor){
            menor = altura;
        }
        if(sexo == 1){
            nhomens++;
        }else{
            nmulher++;
        }
        if(sexo ==2){
            somaalt = somaalt + altura;
        }
        cin>>altura;
    }
    float mediam = somaalt/nmulher;
    cout<<nhomens<<" Hom."<<endl;
    cout<<"Menor altura: "<<menor<<endl;
    cout<<"Média: ";
    cout<<fixed<<setprecision(2)<<mediam;

    return 0;
}
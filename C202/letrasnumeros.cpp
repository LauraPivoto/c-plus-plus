
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int vetor[5],i;
    float soma=0, media, maior=0, menor=0, igual=0;
    for(i=0; i<=5;i++){
        cin>>vetor[i];
        soma = soma+ vetor[i];
    }
    
    media = soma/5.0;

    for(i=0; i<=5;i++){
        if(vetor[i]>media){
            maior++;
        }else if(vetor[i]<media){
            menor++;
        }else{
            igual++;
        }
    }
    cout<<media<<endl;
    cout<<maior<<endl;
    cout<<igual<<endl;
    cout<<menor<<endl;
    return 0;
}
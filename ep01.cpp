#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int idade,temptrabalho, anonasc, anoingresso;
    char nome[50];

    cin.getline(nome,50);
    do{
        cin>>anonasc;
    }while(anonasc<1940);

    do{
        cin>>anoingresso;
    }while(anoingresso<1970);

    idade = 2021-anonasc;
    temptrabalho = 2021-anoingresso;

    if(idade>65){
        cout<<"O funcionário está qualificado...";
    } else if(temptrabalho>30){
        cout<<"O funcionário está qualificado...";
    }else if(idade>=60 && temptrabalho>=25){
        cout<<"O funcionário está qualificado...";
    }else{
        cout<<" funcionário ainda não está qualificado";
    }
    return 0;
}
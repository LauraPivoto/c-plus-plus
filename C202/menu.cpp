#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char nome[50], estado[4], CPF[12];
    float mineiros=0.0, estranhos=0.0, escolha, total=0.0;
    cout<<"Precione 1 para entrar com dados, 2 para sair";
    cin>>escolha;
    
    while(escolha==1){
        cin.ignore();
        cout<<"nome: ";
        cin.getline(nome,50);
        cout<<"CPF: ";
        cin>>CPF;
        cin.ignore();
        cout<<"Estado: ";
        cin.getline(estado,3);


        if ((strcmp(estado, "MG")==0)){
            mineiros++;
        }
        else{
            estranhos++;
        }
		total++;
         
        cout<<"Precione 1 para entrar com dados, 2 para sair";
    	cin>>escolha;
    }


    cout<<mineiros/total*100<<"%"<<endl;
    cout<<estranhos/total*100<<"%";
        
    return 0;
}
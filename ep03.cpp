#include <iostream>
#include <cstring>

using namespace std;

int main(){
   float idade, pessoasA=0.0, pessoasB=0.0, pessoasC=0.0, pessoasD=0.0,geral=0.0;
   int opcao;
    char plano[2];
    cin>>idade;
   while(idade>0){
       cin>>opcao;

        switch(opcao){
       case 1:
        if(idade<=15){
            cout<<"Plano A";
            pessoasA++;
            geral++;
            break;
        }else if(idade>15 && idade<=35){
            cout<<"Plano A";
            pessoasA++;
            geral++;
            break;
        }else if(idade>35 && idade<=55){
            cout<<"Plano B";
            pessoasB++;
            geral++;
            break;
        }else{
            cout<<"Plano C";
            pessoasC++;
            geral++;
            break;
        }

        case 2:
        if(idade<=15){
            cout<<"Plano A";
            pessoasA++;
            geral++;
            break;
        }else if(idade>15 && idade<=35){
            cout<<"Plano B";
            pessoasB++;
            geral++;
            break;
        }else if(idade>35 && idade<=55){
            cout<<"Plano C";
            pessoasC++;
            geral++;
            break;
        }else{
            cout<<"Plano D";
            pessoasD++;
            geral++;
            break;
        }
    }
    //float porcA,porcB,porcC,porcD;
    //porcA = pessoasA/ger
    cin>>idade;
   }
   cout<<pessoasA/geral*100<<"%"<<endl;
   cout<<pessoasB/geral*100<<"%"<<endl;
   cout<<pessoasC/geral*100<<"%"<<endl;
   cout<<pessoasD/geral*100<<"%"<<endl;
    return 0;
}
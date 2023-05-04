#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){
    float N, Quantia, control=1, C=0, S=0, R=0, total_animais=0;
    char Tipo[2];

    cin>>N;
    for(control=1;control<=N;control++){
        do{cin>>Quantia; } while(Quantia<1 && Quantia>15);

        total_animais = total_animais+Quantia;

        cin.ignore();
        cin.getline(Tipo,2);
        if ((strcmp(Tipo, "C")==0)){
            C=C+Quantia;
        }
        else if((strcmp(Tipo, "R")==0))
        {
            R=R+Quantia;
        }else if((strcmp(Tipo, "S")==0)){
            S=S+Quantia;
        }else{
            cout<<"Esse animal não está nos testes"<<endl;
        }

    }
    
    cout<<"Total: "<<total_animais<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<S<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<< C/total_animais*100<<" %"<<endl;
    cout<<"Percentual de ratos: "<< R/total_animais*100<<" %"<<endl;
    cout<<"Percentual de sapos: "<< S/total_animais*100<<" %"<<endl;


    return 0;
}
#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int alunos, entrada;
        cout<<"Você deseja responder o questionário? 0 para não e 1 para sim";
        cin>>entrada;
        float seguro=0.0, nseguro=0.0, volta=0.0, nvoltar=0.0, reside=0.0, nreside=0.0, total=0.0, q4=0.0, q3=0.0;
        char escolha[5];        //q4 e q3 é para as últimas duas estatisticas
        bool res=false, volt=false; //reside em SRS e voltar as aulas

        while(entrada==1){
            cin.ignore();
            cout<<"Você se sente seguro para voltar às aulas presenciais? Responda com sim ou não";
            cin.getline(escolha,5);
                if ((strcmp(escolha, "sim")==0)){
                    seguro++;
                    total++;
                }
                else{
                    nseguro++;
                    total++;
                }

            cout<<"Você pretende voltar às aulas presenciais (sim), ou continuar com as aulas remotas (não)? ";
            cin.getline(escolha,5);
                if ((strcmp(escolha, "sim")==0)){
                    volta++;
                    volt=true;
                }
                else{
                    nvoltar++;
                    volt=false;
                }

            cout<<" Você reside em Sta. Rita do Sapucaí? Responda com sim ou não?";
            cin.getline(escolha,5);
                if ((strcmp(escolha, "sim")==0)){
                    reside++;
                    res=true;
                }
                else{
                    nreside++;
                    res=false;
                }

                if(res==true && volt==true){ //para mostrar porcentagem de alunos que residem em Santa Rita e pretendem voltar às aulas presenciais;
                    q3++;
                }

                if(res==false && volt==true){ //porcentagem de alunos que não residem em Santa Rita e pretendem voltar às aulas presenciais.
                    q4++;
                }
            
            
            cout<<"Você deseja responder o questionário? 0 para não e 1 para sim";
            cin>>entrada;
        }

    cout<<"Seguros: "<<seguro/total*100<<"%"<<endl;
    cout<<"Vão continuar remotamente: "<<nvoltar/total*100<<"%"<<endl;
    cout<<"Residem e querem voltar: "<<q3/total*100<<"%"<<endl;
    cout<<"Não residem e querem voltar: "<<q4/total*100<<"%"<<endl;

    return 0;
}
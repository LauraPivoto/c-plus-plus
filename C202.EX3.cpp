#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float N,control=1.0,opniao,conco=0.0,nconco=0.0,nsabem=0.0;
    cin>>N;
    for(control=1;control<=N;control++){
        cin>>opniao;
        if(opniao==1){
            conco++;
        }
        if(opniao==2){
            nconco++;
        }
        if(opniao==3){
            nsabem++;
        }
    }
    cout<<"O número de pessoas que aprovam são: "<<conco<<" e o percentual é: "<<(conco/N)*100<<"%"<<endl;
    cout<<"O número de pessoas que não aprovam são: "<<nconco<<" e o percentual é: "<<(nconco/N)*100<<"%"<<endl;
    cout<<"O número de pessoas que não sabem são: "<<nsabem<<" e o percentual é: "<<(nsabem/N)*100<<"%";
	return 0;
}
	
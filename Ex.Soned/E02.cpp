#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int N,control=1,opniao,conco=0,nconco=0,nsabem=0;
    cin>>N;
    for(control=1,control<=N;control++){
        cin>>opniao;
        if(opnião==1){
            conco++;
        }
        if(opnião==2){
            nconco++;
        }
        if(opnião==3){
            nsabem++;
        }
    }
    cout>>'O número de pessoas que aprovam são: ' + conco + 'e o percentual é: ' + (conco/N);
	return 0;
}
	
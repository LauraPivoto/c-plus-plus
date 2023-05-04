#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    cin>>N;
    int vetor[N], control,X;
    float xapareceu=0;

    for(control=0;control<N;control++){
        cin>>vetor[control];
    }

    cin>>X;

    for(control=0;control<N;control++){
        if(vetor[control]==X){
            xapareceu++;
        }
    }
    cout<<fixed<<setprecision(2)<<(xapareceu/N)*100;
    return 0;
}
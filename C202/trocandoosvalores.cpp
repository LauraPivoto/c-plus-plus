#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float N;
    cin>>N;
    int vetor[N];
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
    cout<<xapareceu/N;
    return 0;
}
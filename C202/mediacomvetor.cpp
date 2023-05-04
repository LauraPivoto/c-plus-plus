#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N, control=0, neg=0;
    cin>>N;
    int vetor[N];

    for(control=0;control<N;control++){
        cin>>vetor[control];

        if(vetor[control]<0){
            neg++;
            vetor[control]=0;
        }else{
        }
    }

    for(control=0;control<N;control++){
        cout<<vetor[control]<<endl;
    }
    cout<<neg;

    
    

    return 0;
}
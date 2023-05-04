#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, idades, maior = -999, control=1;
    cin>>n;
    for(control=1;control<=n;control++){
        do{
            cin>>idades;   
        }while(idades<=0);

        if(idades>maior){
            maior = idades;
        }
    }

    cout<<maior;
    return 0;
}
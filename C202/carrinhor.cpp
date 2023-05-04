#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int Nu, control, vel, ganhador;
    int menor = 400;
    cin>>Nu;
    for(control = 1; control <= Nu; control++){
        cin>>vel;
        if(vel<menor){
            menor = vel;
            ganhador = control;
        }
    }
    cout<<ganhador;

    return 0;
}
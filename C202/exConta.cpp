#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){
    float entrada;
    int positivos = 0;
    float media = 0;
    int controle=1;
    for(controle = 1; controle <=10;controle++){
        cin>>entrada;
        media = media + entrada;
        if(entrada>=0){
            positivos++;
        }
    }
    cout<<"Positivos = "<<positivos<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Media = "<<media/10;

    return 0;
}
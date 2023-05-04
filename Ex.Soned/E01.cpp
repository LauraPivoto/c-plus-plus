#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){
    float y=1.0;
    float x;
    float soma = 0;
    cin>>x;
    if(x>0){
        for(y!=0;y<6;y++){
            soma = soma + (y/pow(x,y));
        }
        cout<<"f(x)= ";
        cout<<fixed<<setprecision(5)<<soma;
    }else{
         cout<<"Cálculo impossível para este valor de x";
    }
    return 0;
}
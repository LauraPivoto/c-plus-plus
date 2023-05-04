#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int expo=1;
    float num,deno=50.0, soma =0.0;
        cin>>num;
        for(deno=50.0;deno>0.0;deno--){
            soma = soma + (pow(num,expo)/deno);
            expo++;
        }
    cout<<soma;
    return 0;
}
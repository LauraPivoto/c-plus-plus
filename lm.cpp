#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N, n=1, maior=-300, idade;
        cin>>N;
        for(n=1;n<=N;n++){
            do{
                cin>>idade;
            }
            while(idade<=0);

             if(idade>maior){
                    maior = idade;
                }

        }
        cout<<maior;


    return 0;
}
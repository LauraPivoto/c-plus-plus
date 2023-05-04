#include <iostream>

using namespace std;

    int fatorial(int *N){
        int N1, f=1;
            for(N1 = 1; N1<= *N; N1++){
            f = f*N1;
            };
        cout<<f;
    }

    int main(){
        int entrada;
        cin>>entrada;
        fatorial(&entrada);

        return 0;
    }
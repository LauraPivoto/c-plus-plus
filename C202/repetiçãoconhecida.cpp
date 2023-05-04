
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    int control = 1;
    float soma=0;
    cin>>N;
        while(control<=N){
            soma += (1.0/control);
            control++;
    }
    cout<<fixed<<setprecision(4)<<soma;
}

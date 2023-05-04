#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N,H;
    float valor;
    cin>>N>>H>>valor;
    float salario = H*valor;

    cout<<"NUMBER = "<<N<<endl;
    cout<<"SALARY = U$ ";
    cout<<fixed<<setprecision(2)<<salario<<endl;

    return 0;
}
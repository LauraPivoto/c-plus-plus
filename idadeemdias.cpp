#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int I,anos,meses,dias;
    cin>>I;

        anos = I/365;
        I = I - (anos*365);
    
        meses = I/30;
        I = I-(meses*30);
    
    cout<<anos<<" ano (s)"<<endl;
    cout<<meses<<" mes (es)"<<endl;
    cout<<I<<" dia (s)"<<endl;


    return 0;
}
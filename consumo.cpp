#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
    int X;
    float Y;
    cin>>X>>Y;
    cout<<fixed<<setprecision(3)<<(X/Y)<<" km/l"<<endl;

    return 0;
}
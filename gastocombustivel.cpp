#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float h,vm,x;
    cin>>h>>vm;

    x = (h*vm)/12;

    cout<<fixed<<setprecision(3)<<x<<endl;

    return 0;
}
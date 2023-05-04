#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int main() {
    double raio;
    cin>>raio;
    double n = 3.14159;
    double area = n*(pow(raio,2));
    cout<<"A=";
    cout<<fixed<<setprecision(4)<<area<<endl;
 
    return 0;
}
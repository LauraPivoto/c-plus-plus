#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int N,h,m,s;
    cin>>N;

        h = N/3600;
        N = N - (h*3600);
    
        m= N/60;
        N = N-(m*60);
    
    cout<<h<<":"<<m<<":"<<N;

    return 0;
}
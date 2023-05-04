#include <iostream>

using namespace std;

    int FAT(int N){
        int N1, f=1;
            for(N1 = 1; N1<= N; N1++){
            f = f*N1;
            };
			return f;
    }

    int main(){
    	
        int N1;
        
        do
		{
		cin>>N1;
		}while(N1<0);
        
		
        FAT(N1);
        
        cout<<FAT(N1);;

        return 0;
    }
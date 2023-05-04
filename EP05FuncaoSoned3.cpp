#include <iostream>

using namespace std;

    int FAT(int N){
        int N1, f=1;
            for(N1 = 1; N1<= N; N1++){
            f = f*N1;
            };
			return f;
    }
    
    int COMBINA(int M, int P){
		int C;
		
		C = FAT(M)/(FAT(M - P) * FAT(P));
		
		return C;
	}
    

    int main(){
    	
        int M1, P1;
        cin>>M1>>P1;
		
        COMBINA(M1,P1);
        
        cout<<COMBINA(M1,P1);

        return 0;
    }
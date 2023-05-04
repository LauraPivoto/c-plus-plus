#include<iostream>
#include <cstring>

using namespace std;

int main(){
	int n;//experimentos ,testes
	float qc=0;// cobaia sapo
	float qr=0;//cobaia rato
	float qs=0;//cobaia sapo
	int q; //quantidade
	//char C;//coelho
	//char R; //rato            //tipo de cobaia
	//char S;//sapo
	float totaldecobaias=0;//total ao todo
	float porc=0;//porcentagem  de coelhoes 
	float porr=0;//porcentagem  de ratos 
	float pors=0;//porcentagem  de sapos 
	int i;
	char tipo[3];
	
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		do{
	    cin>>q;
		}while(q<1&&q>15);
		cin.ignore();
		totaldecobaias=totaldecobaias+q;
	    cin.getline(tipo,2);
	
	if ((strcmp(tipo, "C")==0)){
            qc=qc+q;
        }
        else if((strcmp(tipo, "R")==0))
        {
            qr=qr+q;
        }else if((strcmp(tipo, "S")==0)){
            qs=qs+q;
        }else{
            cout<<"Esse animal não está nos testes"<<endl;
        }
	}

	
		cout<<"Total: "<<totaldecobaias<<endl;
		
		cout<<"Total de coelhos: "<<qc<<endl;
		
		cout<<"Total de ratos: "<<qr<<endl;
		
		cout<<"Total de sapos : "<<qs<<endl;
		
		porc=qc*100/totaldecobaias;
		porr=qr*100/totaldecobaias;
		pors=qs*100/totaldecobaias;
	
		cout<<"Percentual de coelhos: "<<porc<<endl;
		cout<<"Percentual de ratos: "<<porr<<endl;
		cout<<"Percentual de sapos: "<<pors<<endl;
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}
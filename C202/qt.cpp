#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int vizu, dura, cat, cat1,cat2,cat3, somavizu, somavizucat1, somavizucat2, somavizucat3;
    char nomec[50];

    cin>>vizu;
    cin.ignore();
    while(vizu>0){

        cin.getline(nomec, 50);
        cin>>dura;
        cin>>cat;
        somavizu = somavizu+vizu;

        
    	switch(cat)
	    {
	        case 1:
		        cat1++;
                somavizucat1 = somavizucat1+vizu;
		        break;
	        case 2:
		        cat2++;
                somavizucat2 = somavizucat2+vizu;
		        break;
	        case 3:
		        cat3++;
                somavizucat3 = somavizucat3+vizu;
		        break;
	    }

        cin>>vizu;
    }
	cout<<fixed<<setprecision(2);

	if(cat1>cat2 && cat1>cat3){
		cout<<"A categoria que teve mais visualizacoes foi esporte";
	} else if(cat2>cat1 && cat2>cat3){
		cout<<"A categoria que teve mais visualizacoes foi musica";
	}else{
		cout<<"A categoria que teve mais visualizacoes foi entretenimento";
	}


    return 0;
}
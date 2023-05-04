#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float vizualizacoes, total_vizualizacoes=0, media_tempo, qtdd_videos=0, cat_entre, cat_music, cat_esporte, total_duracao_videos=0;
    char nome[50],
    int duracao_video, categoria;

    cin>>vizualizacoes;
    while(vizualizacoes>=0){
        cin.ignore();
        cin.getline(nome, 50);
        cin>>duracao_video;
        cin>>categoria;
        
        total_duracao_videos=total_duracao_videos+duracao_video;

        qttd_videos++;
        total_vizualizacoes=total_vizualizacoes+vizualizacoes;

        float total_vizu_esportes=0, total_vizu_entre=0, total_vizu_music=0;

        switch(categoria){
            case 1:
            cat_esporte++;
            total_vizu_esportes=total_vizu_esportes+vizualizacoes;
            break;

            case 2:
            cat_music++;
            total_vizu_music=total_vizu_music+vizualizacoes;
            break;

            case 3:
            cat_entre++;
            total_vizu_entre=total_vizu_entre+vizualizacoes;
            break;
        }
    }

    if(cat_entre>cat_esporte&&cat_entre>cat_music){
        cout<<"Cat entre"<<endl;
        }else if(cat_esporte>entre&&cat_esporte>cat_music){
            cout<<"cat esporte"<<endl;
        }else if(cat_music>cat_entre&&cat_music>cat_esporte){
            cout<<"cat music"<<endl;
        }
    cout<<fixed<<setprecision(2);
    cout<<"Porc music: "<<total_vizu_music/total_vizualizacoes*100<<endl;
    cout<<"Porc entre: "<<total_vizu_entre/total_vizualizacoes*100<<endl;
    cout<<"Porc esporte: "<<total_vizu_esportes/total_vizualizacoes*100<<endl;

    cout<<"temp duracao: "<<total_duracao_videos/qttd_videos;
    
    






    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int i,j,k,x,y,check;
    int card[4][13]={0},player=0,comp=0;
    srand(time(NULL));
    
    printf("�}�l�C��!\n");
    
    for(k=0 ; ;k++){
          x=rand()%4+1;
          y=rand()%13+1;
          for(;;){
                if(card[x][y]==1){
                     x=rand()%4+1;
                     y=rand()%13+1;
                }else
                     break;
          }
          card[x][y]=1;
          if(y>=10){
                player+=10;
          }else if(y>=2 && y<=9){
                player+=y;
          }else if(y==1){
                if(player+11>21){
                      player+=1;
                }else{
                      player+=11;
                }
          }
          
          printf("�z�⪺�O: ");
          switch(x){ 
            case 1:
                 printf("���� %d",y);
                break;
            case 2:
                 printf("��� %d",y);
                break;
            case 3:
                 printf("�R�� %d",y);
                break;
            case 4:
                 printf("�®� %d",y);
                break;
          } 
          if(player==21){
              printf("\n\n�z���[�`:%d\n",player);
              printf("�q�����[�`:%d\n",comp);
              printf("<<�z>>��o�F21�I!!!\n");
              printf("WWWWWWWWWWWWWWWWWWWW�AĹ�SWWWWWWWWWWWWWWWWWWWW\n");
              system("pause");
              return 0;
          }else if(player>21){
              printf("\n\n�z���[�`:%d\n",player);
              printf("�q�����[�`:%d\n",comp);
              printf("<<�z>>�z����!!!\n");
              printf("GGGGGGGGGGGGGGGGGGGG�A��SGGGGGGGGGGGGGGGGGGGG\n");
              system("pause");
              return 0;
          }
              
          printf("\n�q����F�@�i�P\n");
          x=rand()%4+1;
          y=rand()%13+1;
          for(;;){
                if(card[x][y]==1){
                     x=rand()%4+1;
                     y=rand()%13+1;
                }else
                     break;
          }
          card[x][y]=1;
          if(y>=10){
                comp+=10;
          }else if(y>=2 && y<=9){
                comp+=y;
          }else if(y==1){
                if(comp+11>21){
                      comp+=1;
                }else{
                      comp+=11;
                }
          }
          if(comp==21){
              printf("\n\n�z���[�`:%d\n",player);
              printf("�q�����[�`:%d\n",comp);
              printf("<<�q��>>��o�F21�I!!!\n");
              printf("GGGGGGGGGGGGGGGGGGGG�A��SGGGGGGGGGGGGGGGGGGGG\n");
              system("pause");
              return 0;
          }else if(comp>21){
              printf("\n\n�z���[�`:%d\n",player);
              printf("�q�����[�`:%d\n",comp);
              printf("<<�q��>>�z����!!!\n");
              printf("WWWWWWWWWWWWWWWWWWWW�AĹ�SWWWWWWWWWWWWWWWWWWWW\n");
              system("pause");
              return 0;
          }
          
        printf("\n");
        printf("\n�O�_�n�A��@�i?(1):�~�� (2):����\n");
        scanf("%d",&check);
        fflush(stdin);
        if(check==2){
              printf("�z���[�`:%d\n",player);
              printf("�q�����[�`:%d\n",comp);
              if(player>comp){
                    printf("WWWWWWWWWWWWWWWWWWWW�AĹ�SWWWWWWWWWWWWWWWWWWWW\n");
              }else if(player<comp){
                    printf("GGGGGGGGGGGGGGGGGGGG�A��SGGGGGGGGGGGGGGGGGGGG\n");
              }
              system("pause");
              return 0;
        }
    }
    
    
    system("pause");
    return 0;

}

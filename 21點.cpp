#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int i,j,k,x,y,check;
    int card[4][13]={0},player=0,comp=0;
    srand(time(NULL));
    
    printf("開始遊戲!\n");
    
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
          
          printf("您抽的是: ");
          switch(x){ 
            case 1:
                 printf("梅花 %d",y);
                break;
            case 2:
                 printf("方塊 %d",y);
                break;
            case 3:
                 printf("愛心 %d",y);
                break;
            case 4:
                 printf("黑桃 %d",y);
                break;
          } 
          if(player==21){
              printf("\n\n您的加總:%d\n",player);
              printf("電腦的加總:%d\n",comp);
              printf("<<您>>獲得了21點!!!\n");
              printf("WWWWWWWWWWWWWWWWWWWW你贏惹WWWWWWWWWWWWWWWWWWWW\n");
              system("pause");
              return 0;
          }else if(player>21){
              printf("\n\n您的加總:%d\n",player);
              printf("電腦的加總:%d\n",comp);
              printf("<<您>>爆炸啦!!!\n");
              printf("GGGGGGGGGGGGGGGGGGGG你輸惹GGGGGGGGGGGGGGGGGGGG\n");
              system("pause");
              return 0;
          }
              
          printf("\n電腦抽了一張牌\n");
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
              printf("\n\n您的加總:%d\n",player);
              printf("電腦的加總:%d\n",comp);
              printf("<<電腦>>獲得了21點!!!\n");
              printf("GGGGGGGGGGGGGGGGGGGG你輸惹GGGGGGGGGGGGGGGGGGGG\n");
              system("pause");
              return 0;
          }else if(comp>21){
              printf("\n\n您的加總:%d\n",player);
              printf("電腦的加總:%d\n",comp);
              printf("<<電腦>>爆炸啦!!!\n");
              printf("WWWWWWWWWWWWWWWWWWWW你贏惹WWWWWWWWWWWWWWWWWWWW\n");
              system("pause");
              return 0;
          }
          
        printf("\n");
        printf("\n是否要再抽一張?(1):繼續 (2):結算\n");
        scanf("%d",&check);
        fflush(stdin);
        if(check==2){
              printf("您的加總:%d\n",player);
              printf("電腦的加總:%d\n",comp);
              if(player>comp){
                    printf("WWWWWWWWWWWWWWWWWWWW你贏惹WWWWWWWWWWWWWWWWWWWW\n");
              }else if(player<comp){
                    printf("GGGGGGGGGGGGGGGGGGGG你輸惹GGGGGGGGGGGGGGGGGGGG\n");
              }
              system("pause");
              return 0;
        }
    }
    
    
    system("pause");
    return 0;

}

#include<stdio.h>
#define N 50

int graph[N][N];//50*50
int count[N];


int main(){

    int v,i,j,connected;

    printf("How many Data you have?");
    scanf("%d",&v);//5 [ A B C D E ]


    for(i=0;i<v;i++){ //0 1 2 3 4
        for(j=0;j<v;j++){ //0-0 0-1 0-2 0-3 0-4  //1-0 1-1 1-2 1-3 1-4
            if(graph[i][j] == 0 || graph[j][i] == 0 ){
                printf("%d is Connected with %d ? ",i,j);//0 - 3
                scanf("%d",&connected);//1
                graph[i][j] = connected;
                graph[j][i] = connected;
            }
        }
    }

    for(i=0;i<v;i++){
        printf("\n%d is connected with :  ",i);
        for(j=0;j<v;j++){
            if(graph[i][j] == 1 ){
                printf(" %d",j);
            }

        }
    }

    for(i=0;i<v;i++){//0 1 2 3
        for(j=0;j<v;j++){//3,0 3,1 3,2  3,3
            if(graph[i][j] == 1){
                count[i] = count[i]+1;//0+1 => 1
            }
        }
    }


    for(i=0;i<v;i++){
        printf("\n%d : %d",i,count[i]);
    }

    return 0 ;


}

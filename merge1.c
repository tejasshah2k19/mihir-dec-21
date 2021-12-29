#include<stdio.h>
#define S1 5
#define S2 8


int main(){
//
    int a[] = {1,22,33,44,55};
    int b[] = {5,6,7,21,35,51,99,100};
    int c[S1+S2];
    int i=0,j=0,k=0;

        while(i<S1  && j <S2){
            if( a[i]  <  b[j] ){
                c[k++] = a[i++];
            }else{
                c[k++] = b[j++];
            }
        }


        if(i < S1 ){
                for(;i<S1;i++){
                    c[k++] = a[i];
                }
        }else if(j<S2 ){
                for(;j<S2;j++){
                    c[k++] = b[j];
                }
        }


        printf("\nSorted Array\n");
        for(i=0;i<S1+S2;i++){
            printf("%d ",c[i]);
        }

    return 0 ;

}

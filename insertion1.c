#include<stdio.h>
#define S 8


int main(){
//
     int a[] = {5,9,8,4,33,3,7,19};
     int i=0,j=0,k=0,tmp;

    for(i=1;i<S;i++){
        for(j=i-1;j>=0;j--){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }else{
                break;
            }
        }
    }


        printf("\nSorted Array\n");
        for(i=0;i<S;i++){
            printf("%d ",a[i]);
        }

    return 0 ;

}

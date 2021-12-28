#include<stdio.h>
#define S 6

int main(){
   // int a[] = {25,12,32,2,56,9};
   // int a[] = {1,2,3,4,5,6};
    int a[] = {6,5,4,3,2,1};
    int i,j,tmp,isSwap=1,x;

    printf("\nArray Before Sorting\n");
    for(i=0;i<S;i++){
        printf("\n%d",a[i]);
    }

    //n*n-1
    for(i=0;i<S;i++){//0 1
        isSwap = 0;
        printf("\n%d pass\n",i+1);
        for(j=0;j<S-1;j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                isSwap = 1;
            }
        }
        for(x=0;x<S;x++){
            printf(" %d",a[x]);
        }

        if(isSwap == 0){
                break;
        }
    }



    printf("\nArray After Sorting\n");
    for(i=0;i<S;i++){
        printf("\n%d",a[i]);
    }



    return 0;

}

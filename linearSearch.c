#include<stdio.h>
#define SIZE 8

int main(){

    int a[] = {1,22,33,44,55,66,77,88};
    int key,i,found=0;//0 ->not present

    printf("Enter element to search :: ");
    scanf("%d",&key); //66

    for(i=0;i<SIZE;i++){
        if(a[i] == key){
            found = 1;//1 -> present
            break;
        }
    }

    found == 1?printf("\nElement Found"):printf("\nElement Not found");


    return 0;
}

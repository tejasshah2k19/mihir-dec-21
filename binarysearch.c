#include<stdio.h>
#define SIZE 8

int main(){

    int a[] = {1,22,33,44,55,66,77,88};
    int key,i,found=0,mid;//0 ->not present
    int min=0,max=SIZE-1;
    printf("Enter element to search :: ");
    scanf("%d",&key); //66

    while(min <= max){
        mid = (min+max)/2;
        if(a[mid] == key){
            found = 1;
            break;
        }else if(a[mid] > key ){
            max = mid - 1;
        }else {
            min = mid  + 1;
        }
    }


    found == 1?printf("\nElement Found"):printf("\nElement Not found");


    return 0;
}

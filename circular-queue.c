#include<stdio.h>
#define SIZE 5

int q[SIZE];
int r = -1;
int f = -1;

void addElement(int num){
    if(r == SIZE - 1  && f == 0){
        printf("\nQueue is Full");
    }else if(r == f - 1){
        printf("\nQueue is Full");
    }else if(r == SIZE -1 ){
            r=0;
            q[r] = num;
            printf("\n%d inserted ",num);
    }else{
        r++;//0 1
        q[r] = num;
        printf("\n%d inserted ",num);
    }
    //first time insertion
    if(f == -1){
        f=0;
    }
}
void deleteElement(){
    if(f == -1){
        printf("\nQueue is empty ");
    }else{
        printf("\n%d removed ",q[f]);//10 20
        if(f == r){
            r= -1;
            f= -1;//empty
        }else if(f == SIZE -1 ){
            f = 0;
        }
        else{
            f++;
        }
    }
}

void display(){
    int i;
    if(r == -1){
        printf("\nQueue is empty");
    }else{

        printf("\nElements in Queue\n");
        if(r < f){
            //circular queue
            for(i=f;i<SIZE;i++){
                printf(" %d",q[i]);
            }
            for(i=0;i<=r;i++){
                printf(" %d",q[i]);
            }

        }else{
            //simple queue
            for(i=f;i<=r;i++){
                printf(" %d",q[i]);
            }

        }


    }
}


int main(){

/*
    addElement(10);//add 10 in queue
    addElement(20);
    addElement(30);
    addElement(40);
    addElement(50);
    addElement(60);
    deleteElement();
    deleteElement();
    display();
  */


    int choice ;
    int num;
    while(1){
        printf("\n1 for Add\n2 for Delete\n3 For Display\n4 For Exit\nEnter choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\nEnter number");
                scanf("%d",&num);
                addElement(num);
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();break;
            case 4:exit(0);
        }
    }

    return 0;
}

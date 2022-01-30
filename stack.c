#include<stdio.h>
#define SIZE 5
int stack[SIZE],top=-1;
void push();
void pop();
void peep();
void display();

int main(){
    int choice;

    while(1){
        printf("\n1 For Push\n2 For Pop\n3 For peep\n4 for Display\n0 for Exit\nEnter choice");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);

        }//switch
    }//while
    return 0;
}//main

void push(){
    int num;
    if(top == SIZE -1 ){
        printf("\nStack FULL");

    }else{
        printf("\nEnter number");
        scanf("%d",&num);
        top++;
        stack[top] = num;
    }
}
void pop(){
    int num;
    if(top == -1){
        printf("\nStack is Empty");
    }else{
        num = stack[top];
        top--;
        printf("\n%d poped",num);

    }
}
void display(){

    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }

}
//top
void peep(){
    //50
    //40
    //30
    //20
    //10
    int location,index;
    printf("Enter your location");
    scanf("%d",&location);//2nd
    //40
    //index = //
    //printf("\n%d",stack[index]);


}


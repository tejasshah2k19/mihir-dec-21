#include<stdio.h>

struct node{
    int data;//2 byte
    struct node *next;//??->4
}*head=NULL,*last=NULL; //  link list is empty


int main(){
        int *p;
        struct node *tmp;

        //loop -> 5
        int num;
        printf("Enter number");
        scanf("%d",&num);//10 20  30

        if(head == NULL){
            //head
            head = (struct node*)malloc(sizeof(struct node));//30 byte -->
            head->data = num;
            head->next = NULL;
            last = head;
        }else{
            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->data = num;
            tmp->next = NULL;
            last->next = tmp;
            last = tmp; //last = last -> next;

        }



        return 0;

}

#include<stdio.h>

struct node{
    int data;//2 byte
    struct node *next;//??->4
}*head=NULL,*last=NULL; //  link list is empty

void addNode(){
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


}

void insertAtBeg(){

        int num;
        struct node *tmp;
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
            tmp->next = head;
            head = tmp;
        }
}

void insertAny(){
    int source,num;
    struct node *tmp,*p;

    printf("Enter number after you want to add new number");
    scanf("%d",&source);



    p = head;

    while(p != NULL){
            if(p->data == source){
                break;
            }
            p = p->next;
    }

     if(p == NULL){
        printf("\nInvalid Source please try again...");
     }else{

            printf("Enter number ");
            scanf("%d",&num);//35

            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->data= num;
            tmp->next = p->next;
            p->next = tmp;
     }







}
/*
void display(){
    struct node *p;
    p = head;

    abc:
        printf("%d->",p->data);// 10 20 30
        p=p->next ;

    if( p != NULL){
            goto abc;
    }
}
*/


void display(){
    struct node *p;
/*
    for(p=head;p!=NULL;p=p->next){ //p++ p--
        printf("%d->",p->data);// 10 20 30
    }
*/
    p= head;

    while(p!=NULL){
        printf("%d-> ",p->data);
        p=p->next;
    }

}

void deleteEnd(){

    //10 20 30->NULL
    //head
    //      p

        struct node *p;
        p = head;

        while( p->next != last){
            p = p->next;
        }
        p->next = NULL;

        printf("\n%d removed",last->data);
        free(last);
        last = p ;


}

void deleteBeg()
{

    struct node *p;
    p = head;
    head =head->next;
    printf("\n%d removed",p->data);
    free(p);

}
void deleteAny(){

    int num,flag = 0 ;
    struct node *p,*q;
    printf("\nEnter number that you want to delete!!");
    scanf("%d",&num);
    p = head;
    q = head;
    while(p != NULL){

        if(p->data == num ){
            //delete
            flag =1 ;
            break;
        }
        p = p->next;
    }
    if(flag == 1){
                while(q -> next != p){
                    q = q->next;
                }
        q->next = p->next;
        free(p);
        printf("\n%d removed",num);
    }else{
        printf("\nNumber not found");
    }




}


void search(){

}

// 10 200 30 55 566  1 9

//1 ->  2
//2 =>  3
//3 =>  2


int main(){
        int *p;
        int choice;


        while(1){
            printf("\n0 for exit\n1 for add\n2 for display\n3 for search\n4 for insert at beginning \n5 for insert Any\n6 for delete at end\n7 for delete at beg\n8 for delete any \nenter choice");
            scanf("%d",&choice);

            switch(choice){
                    case 0:exit(0);

                    case 1:
                        addNode();//insert last / insert end
                        break;

                    case 2:
                        display();
                        break;

                    case 3*1:
                        search();
                        break;
                    case 3+1:
                        insertAtBeg(); break;
                    case 4+1:
                        insertAny();break;
                    case 6:
                        deleteEnd();
                        break;
                    case 7:
                        deleteBeg();
                        break;
                    case 8:
                        deleteAny();break;
            }
        }




        return 0;

}

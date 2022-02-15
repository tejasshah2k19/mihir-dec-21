#include<stdio.h>

struct node{
    int data;
    struct node *left,*right;
}*root=NULL;



int main(){
    struct node *tmp,*p;

    int num,size,i;

    printf("\nEnter total node?");
    scanf("%d",&size);//6

    for(i=1;i<=size;i++){ //1   2   3   4   5   6

        printf("\nEnter number");
        scanf("%d",&num);//100   200    50      250     70      300


        if(root == NULL){
            root = (struct node*)malloc(sizeof(struct node));
            root->data = num;
            root->left  = NULL;
            root->right = NULL;
        }else{

            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->data = num;
            tmp->left=NULL;
            tmp->right=NULL;


            p = root;
            while(1)
            {
                if(p->data  >   num){
                    //left
                    if(p->left !=NULL){
                        p=p->left;
                    }else{
                        p->left =tmp;
                        break;
                    }
                }else{
                    if(p->right != NULL){
                        p = p->right;
                    }else{
                        p->right = tmp;
                        break;
                    }
                }

            }//while


        }//else



    }//for




}//main

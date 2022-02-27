#include<stdio.h>


struct node{
    int data;
    struct node *left,*right;
};

struct node* newNode(int data){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right= NULL;
    return p;
}


struct node* insert(struct node *root,int data){//DATA 10

    if(root == NULL){
        return newNode(data);//40
    }
    if(data > root->data ){
       root-> right = insert(root->right,data);
    }else{
        root->left = insert(root->left,data);
    }

    //return root; //main root

}


int main()
{

    struct node *root =  newNode(25);

        insert(root,30);


        //inorder preorder postorder
    return 0;

}

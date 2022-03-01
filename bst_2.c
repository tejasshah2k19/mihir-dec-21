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

void printInorder(struct node *root){ //100{ 70

    if(root == NULL) { //100 ,
        return;
    }
    printInorder(root->left);
    printf(" %d ",root->data );
    printInorder(root->right);

    //50 70 80 100

}
void printPreorder(struct node *root){ //100{ 70

    if(root == NULL) { //100 ,
        return;
    }
    printf(" %d ",root->data );
    printPreorder(root->left);
    printPreorder(root->right);

    //50 70 80 100

}


void printPostorder(struct node *root){ //100{ 70

    if(root == NULL) { //100 ,
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    printf(" %d ",root->data );
    //50 70 80 100

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

    return root; //main root

}


//in order  [ Left - ROOT - Right  ]
//pre order [ Root LEFT RIGHT  ]
//pos torder [LEFT RIGHT  Root ]


int main()
{

    struct node *root = NULL;

        root = insert(root,100);
        root = insert(root,70);
        root = insert(root,150);
        root = insert(root,50);
        root = insert(root,80);
        root = insert(root,120);
        root = insert(root,200);


        //inorder preorder postorder

        printf("\n%d\n ",root->data);

      //  printInorder(root);//
        //printPreorder(root);
        printPostorder(root);
    return 0;

}

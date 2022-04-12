#include<stdio.h>


struct Node{

    int data;
    struct Node *left;
    struct Node *right;
    int height;//bf = lh - rh
};

//function for creating node
struct Node* newNode(int data){
        struct Node *tmp = (struct  Node*)malloc(sizeof(struct Node));
        tmp->data = data; // 30
        tmp->left = NULL;
        tmp->right = NULL;
        tmp->height = 0 ;
        return tmp;
}

int maximumh(int lh,int rh ){
    return lh > rh ? lh : rh;
}

//function for height calculation
int height(struct Node *tmp){
   if(tmp == NULL)
    return 0;

   return 1+maximumh(height(tmp->left),height(tmp->right));
}



//function for inserting node into tree
//tree construction

struct Node* insert(struct Node *root,int newData){

    if(root == NULL){
        return newNode(newData);
    }

    if(newData > root->data ){
        //right
        root->right = insert(root->right,newData);
    }
    else if(newData < root->data){
        //left
        root->left = insert(root->left,newData);
    }else{
        return root; // no operation if data is same / already present in  a tree
    }

    root->height =  height(root);
}


//inorder  - tree print function
void inorder(struct Node *root){

    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

//main function

int main(){

    struct Node *root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,3);
    root = insert(root,4);
    root = insert(root,5);

    //print tree
    //inorder ->sorted print --> logic correct
    inorder(root);

    return 0;
}







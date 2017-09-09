#include<iostream>
#include <cstdlib>

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


struct node* insertBinarySearchTree(node *root , int data){
    if(root== NULL){
        root = newNode(data);
        return root;
    }
    node *current = root;
    node *prevoius = NULL;

    while(current != NULL){
        prevoius = current;
        if(current->data > data ){
            current = current->left;
        }else{
            current = current->right;
        }
    }
    if(prevoius->data > data){
        prevoius->left = newNode(data);
    }else{
         prevoius->right = newNode(data);
    }
    return root;
}
// V --> L --> R
void preorder(node *root){
    if(root != NULL){
        std::cout<<root->data<<"\t";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    // Insert into binary search tree
    node *root = insertBinarySearchTree(NULL,10);
    root = insertBinarySearchTree(root,5);
    root = insertBinarySearchTree(root,-10);
    root = insertBinarySearchTree(root,0);
    root = insertBinarySearchTree(root,30);
    root = insertBinarySearchTree(root,36);
    // Printing Pre order
    preorder(root);

}

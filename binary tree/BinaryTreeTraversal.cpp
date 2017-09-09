#include <cstdlib>
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode( int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Vertex -> Left -> Right
void preorder(node *root) {
    if(root != NULL) {
        std::cout<<root->data<<"\t";
        preorder(root->left);
        preorder(root->right);
    }
}

//  Left ->Vertex-> Right
void inorder(node *root) {
    if(root != NULL) {
        inorder(root->left);
        std::cout<<root->data<<"\t";
        inorder(root->right);
    }
}

void postorder( node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        std::cout<<root->data<<"\t";
    }
}

int main(){
    struct node *root = newNode(10);
    root->left = newNode(15);
    root->right = newNode(30);

    root->left->left = newNode(3);
    root->left->right = newNode(6);
    root->left->left->left = newNode(5);

    root->right->right = newNode(2);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(8);

    std::cout<<" Preorder Traversal "<<endl;
    preorder(root);
    std::cout<<endl;

    std::cout<<" Inorder Traversal "<<endl;
    inorder(root);
    std::cout<<endl;

    std::cout<<" Postorder Traversal "<<endl;
    postorder(root);
}


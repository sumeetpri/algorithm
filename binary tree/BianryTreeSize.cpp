#include<iostream>
#include <cstdlib>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode( int data ) {
    struct node* node =  (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


// Get Size of Binary Tree
int getSize(node *root) {
    if(root == NULL) {
        return 0;
    }
    return getSize(root->left)+getSize(root->right)+1;

}
// Get Height of Binary Tree
int getHeight(node *root){
    if(root == NULL){
        return 0;
    }
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    int  height = left>right?left:right;
    return height+1;
}

int main() {
    struct node *root = newNode(10);

    root->left = newNode(6);
    root->right = newNode(30);

    root->left->left = newNode(3);
    root->left->right = newNode(7);

    std::cout<<" Size of Tree Is "<<getSize(root)<<endl;


    struct node* root2 = newNode(10);
    root2->left = newNode(6);
    root2->right = newNode(30);

    root2->left->left =  newNode(3);
    root2->left->right =  newNode(7);
    root2->left->right->left =  newNode(6.5);
    root2->left->right->right =  newNode(12);
    root2->left->right->right->right =  newNode(4);

    int height =  getHeight(root2);
    std::cout<<"Height of the tree is "<<height-1<<endl;

    return 0;
}

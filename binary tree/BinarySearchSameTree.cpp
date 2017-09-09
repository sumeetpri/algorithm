#include<iostream>
#include <cstdlib>
using namespace std;
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

bool isSameTree(node *root1 ,node *root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    return root1->data == root2->data && isSameTree(root1->left,root2->left)&&isSameTree(root1->right , root2->right);
}



int main(){

     Tree One

    struct node* root1 =  newNode(10);

    root1->left = newNode(16);
    root1->right =  newNode(15);
    root1->right->left = newNode(18);

     Tree Two

    struct node* root2 =  newNode(10);

    root2->left = newNode(16);
    root2->right =  newNode(15);
    root2->right->left = newNode(18);


    if(isSameTree(root1,root2)){
        std::cout<<"Tree Matched "<<endl;
    }else{
        std::cout<<"Both The tree is different"<<endl;
    }
}

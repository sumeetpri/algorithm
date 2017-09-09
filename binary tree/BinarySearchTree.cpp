#include<iostream>
#include <cstdlib>

using namespace std;

struct node {
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


struct node* binarySearch(node *root, int key) {
    if(root== NULL) {
        return NULL;
    }

    if(root->data == key) {
        return root;
    } else if(root->data > key) {
        return binarySearch(root->left,key);
    } else {
        return binarySearch(root->right,key);
    }


}

int main() {
    struct  node *root = newNode(10);

    root->left = newNode(5);
    root->right = newNode(30);

    root->left->left = newNode(-10);
    root->left->right = newNode(0);

    root->right->right = newNode(36);

    node *searchNode = binarySearch(root,-10);

    if(searchNode != NULL) {
        std::cout<<" Node Found ";
    } else {
        std::cout<<" Node Not Found ";
    }
}

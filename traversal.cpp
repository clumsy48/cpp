#include <iostream>
#include "common/treeNode.h"

using namespace std;

Node *newNode(int data){
    // Allocate memory for new node
    struct Node *node = (struct Node *)malloc(sizeof(Node));
    // Assign data to this node
    node->data = data;
    // Initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void inorder(Node *root)
{
    if (root == NULL) return ;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);  
}
void preorder(Node *root)
{
    if (root == NULL) return ;
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);  
}
void postorder(Node *root)
{
    if (root == NULL) return ;
    postorder(root->left);
    postorder(root->right); 
    cout << root->data << endl; 
}
Node *contructTree()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(10);
    root->left->left = newNode(8);
    root->left->right = newNode(7);
    root->right->right = newNode(9);
    root->right->right->right = newNode(23);
    root->right->right->right->left = newNode(24);
    
    return root;
}

int main()
{
    //Node *root = contructTree();
    //inorder(root);
    //postorder(root);
    
    return 0;
}
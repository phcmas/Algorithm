#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node *leftchild;
    struct Node * rightchild;
} Node;

Node* initNode (int data, Node *leftchild, Node *rightchild) {
    Node *node =(Node *)malloc(sizeof(Node));
    node->data = data;
    node->leftchild = leftchild;
    node->rightchild = rightchild;
    return node;
}

void preorder(Node *root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->leftchild);
        preorder(root->rightchild);
    }
}

void inorder(Node *root) {
    if (root) {
        inorder(root->leftchild);
        printf("%d ", root->data);
        inorder(root->rightchild);
    }
}

void postorder(Node *root) {
    if (root) {
        postorder(root->leftchild);
        postorder(root->rightchild);
        printf("%d ", root->data);
    }
}


int main() {
    Node *n7 = initNode(50, NULL, NULL);
    Node *n6 = initNode(37, NULL, NULL);
    Node *n5 = initNode(23, NULL, NULL);
    Node *n4 = initNode(5, NULL, NULL);
    Node *n3 = initNode(48, n6, n7);
    Node *n2 = initNode(17, n4, n5);
    Node *n1 = initNode(30, n2, n3);
    preorder(n1);
    printf("\n");
    inorder(n1);
    printf("\n");
    postorder
    (n1);
    return 0;
}


















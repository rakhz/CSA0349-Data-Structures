#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void preOrder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

struct Node* buildTree() {
    int data;
    printf("Enter data (enter -1 for no node): ");
    scanf("%d", &data);

    if (data == -1) {
        return NULL;
    }

    struct Node* newNode = createNode(data);

    printf("Enter left child of %d:\n", data);
    newNode->left = buildTree();

    printf("Enter right child of %d:\n", data);
    newNode->right = buildTree();

    return newNode;
}

int main() {
    printf("Enter the root node:\n");
    struct Node* root = buildTree();

    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    return 0;
}
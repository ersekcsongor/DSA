#include "binary_search_tree.h"

int main() {
    Node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 5);
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    printf("Min value:");
    printf("%d", minValueNode(root)->info);
    printf("\n");
    printf("Max value:");
    printf("%d", maxValueNode(root)->info);
    printf("\n");
    deleteNode(root,3);
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    return 0;
}

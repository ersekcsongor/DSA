#include "binaris_fa.h"

int main() {
    Node *root = createNewNode(1);
    insertLeft(root,2);
    insertRight(root,3);
    insertLeft(root->left,4);
     insertRight(root->left,5);
    insertLeft(root->right,6);
    insertRight(root->right,7);
    preorderTraversal(root);
    return 0;
}

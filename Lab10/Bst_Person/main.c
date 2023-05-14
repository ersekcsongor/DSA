#include "person.h"

int main() {
    node *root = NULL;
    root = insert_node(root, create_node("Elek", "Female", "04/04/2000"));
    root = insert_node(root, create_node("Balazs", "Male", "02/02/2000"));
    root = insert_node(root, create_node("Csaba", "Male", "03/03/2000"));
    root = insert_node(root, create_node("Aliz", "Female", "01/01/2000"));
    root = insert_node(root, create_node("Dalma", "Male", "05/05/2000"));
    inorder_traversal(root);
    return 0;

}
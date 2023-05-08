#include "Node.h"

Node* createList(int number);
Node* additon(Node **first, Node **second);
int converstListToNumber(Node *node);
void addZeros(Node *node);
void deletedigit(Node **node,int digit);


Node *createList(int number){
    Node *head1 = NULL;
    while (number != 0)
    {
        insertAtEnd(&head1,number%10);
        number /= 10;
    }
    return head1;
}
Node *createList2(char word[50]){
    Node *head1 = NULL;
    int n = strlen(word);
    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            insertAtEnd(&head1, word[i]);
        } else{
            insertAtEnd(&head1,word[n-i]);
        }
    }
    return head1;
}

int main() {
    int num1 = 22;
    int num2 = 1342;
    Node *node1 = NULL;
    Node *node2 = NULL;
    Node *result = NULL;
 /*   node1 = createList(num1);
    printList(node1);
    node2 = createList(num2);
    printList(node2);
    result = additon(&node1,&node2);
    printf("The sum of the two integers is: ");
    printList(result);
    int sum = converstListToNumber(result);
    printf("The number is: %i\n",sum);
    addZeros(result);
    printf("After adding 0 after each even item: ");
    printList(result);
    printf("Digit:");
    int digit;
    scanf("%i",&digit);
    insertAtBeginning(&result,digit);
    insertAtEnd(&result,digit);
    printf("After inserting %i digit as first and last node: ",digit);
    printList(result);
    printf("Search for:");
    scanf("%i",&digit);
    if(searchNode(result,digit)) printf("Is present\n");
    else printf("Is not present!\n");
    deletedigit(&result,digit);
    printf("After deleting all occurences of the given digit");
    printList(result);
    printf("After deleting last node:");
    deleteFromEnd(&result);
    printList(result);
    printf("After sorting: ");
    sortLinkedList(result);
    printList(result);*/
    char x[50];
    scanf("%s",x);
    freeList(&result);
    freeList(&node1);
    freeList(&node2);
    printList(result);
    return 0;
}

Node* additon(Node **first, Node **second){
    Node* result = NULL;
    /*
     * 234
     * 987
     * 1221
     */
    int mod = 0 , div = 0;
    while (!isEmpty(*first) && !isEmpty(*second))
    {
        mod = (div + (*first)->data + (*second)->data) % 10;
        div = (div + (*first)->data + (*second)->data) / 10;
        insertAtEnd(&result,mod);
        deleteFromBeginning(first);
        deleteFromBeginning(second);

    }
    while (!isEmpty(*first))
    {
        mod = (div + (*first)->data ) % 10;
        div = (div + (*first)->data ) / 10;
        insertAtEnd(&result,mod);
        deleteFromBeginning(first);
    }
    while (!isEmpty(*second))
    {
        mod = (div + (*second)->data) % 10;
        div = (div  + (*second)->data) / 10;
        insertAtEnd(&result,mod);
        deleteFromBeginning(second);
    }
    if(div != 0)
    {
        insertAtEnd(&result,div);
    }
    *first = NULL;
    *second = NULL;
    return result;
}

int converstListToNumber(Node *node){
    int sum = 0 , p = 1;
    Node* temp = node;
    while (temp != NULL)
    {
        sum = p * temp->data + sum;
        p *= 10;
        temp = temp->next;
    }
    return sum;
}

void addZeros(Node *node){
    Node* temp = node;
    while (temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            insertAfter(temp,0);
            temp = temp->next;
        }
        temp = temp->next;
    }
}

void deletedigit(Node **node,int digit){
    while (searchNode(*node,digit))
    {
        deleteNode(node,digit);
    }
}
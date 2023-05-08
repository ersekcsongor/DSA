#include "array.h"
#include "constants.h"
int main() {
    int n , value = 1;
    IntArray array;
    createIntArray(10,&array);
    printArray(array);
    for (int i = 0; i < array.capacity/2; ++i) {
        insertAt(&array,i,value++);
    }
    printArray(array);
    while(!isFull(array))
    {
        if(value % 2 == 0)
        {
            insertFirst(&array,value++);
        } else{
            insertLast(&array,value++);
        }
    }
    printArray(array);
    printf("Give me an int number:");
    int searchFor;
    scanf("%i",&searchFor);
    int res = search(array,searchFor);
    if(res == -1)
    {
        printf(NOT_FOUND_MESSAGE);
    } else{
        printf("Found %i at position: %i\n",searchFor,res);
    }
    deleteItemAt(&array,res); v
    printArray(array);
    printf("Give me another int number:");
    int newItem;
    scanf("%i",&newItem);
    if(!(update(&array,res,newItem)))
    {
        printf("UNSUCCESFULL UPDATE");
    }
    printArray(array);
    deleteItemAt(&array,res);
    printArray(array);
    srand(time(NULL));
    while (!isEmpty(array))
    {
        int position = rand() % array.capacity;
        printf("Item at position %i = %i\n",position, getItemAt(array,position));
        deleteItemAt(&array,position);
    }
    deallocateIntArray(&array);
    return 0;
}

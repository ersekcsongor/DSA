#include "queue.h"

int main() {
    Queue queue;
    bool ok = true;
    createQueue(5,&queue);
    while(ok) {
        int option;
        printf("Choose the following:"
               "\n\t - 0. Exit"
               "\n\t - 1. isFull?"
               "\n\t - 2. isEmpty?"
               "\n\t - 3. New car arrived (enqueue)"
               "\n\t - 4. Remove car(dequeue)"
               "\n\t - 5. Display all data");
        printf("\nYour option:");
        scanf("%i", &option);
        switch (option)
        {
            case 0:
                printf("The end");
                ok = false;
                return 0;
            case 1:
                printf("The queue is full: %s\n",(isFull(queue)?("yes"):("no")));
                break;
            case 2:
                printf("The queue is empty: %s\n",(isEmpty(queue)?("yes"):("no")));
                break;
            case 3:
                printf("New car arrived,give a valid plate number:");
                char carPlate[CAR_PLATE_NUMBER_LIMIT];
                scanf("\n%[^\n]", carPlate);
                enqueue(&queue,carPlate);
                break;
            case 4:
            {
                char *result = dequeue(&queue);
                printf("The removed car is %s\n",result);
                break;
            }
            case 5:
                printf("The queue is:\n3"
                       "");
                display(queue);
                break;
            default:
                printf("Invalid option\n");
        }

    }
}

#include "functions.h"

int main() {
    char expression1[] = " 2 5 3 18 + * * 15 2 ";
    Stack stack;
    createStack(strlen(expression1), &stack);
    const char s[2] = " ";
    char *token;
    int q;
    int save = 0;
    token = strtok(expression1, s);
    while (token != NULL) {
        if (!isFull(stack)) {
            if (isdigit(*token)) {
                q = atoi(token);
                push(&stack, q);
            } else {
                if (isalpha(*token)) {
                    printf("An alphabet character cannot be added to the stack! :c/n");
                    return -1;
                }
                switch (*token) {
                    case '+':
                        save = pop(&stack) + pop(&stack);
                        break;
                    case '-':
                        save = pop(&stack) - pop(&stack);
                        break;
                    case '*':
                        save = pop(&stack) * pop(&stack);
                        break;
                    case '/':
                        save = pop(&stack) / pop(&stack);
                        break;
                }
                push(&stack, save);
                save = 0;
            }
            token = strtok(NULL, s);
        }
    }
    printf("Stack eredmenye:%i", peek(stack));
    return 0;
}

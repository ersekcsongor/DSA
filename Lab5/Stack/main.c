#include "functions.h"

int main() {
    char expression1[] = "2536+**15/2";
    Stack stack;
    createStack(strlen(expression1),&stack);
    const char s[2] = " ";
    char *token;
    token = strtok(expression1,s);

    return 0;
}

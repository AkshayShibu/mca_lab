#include <stdio.h>
#include <ctype.h>   // for isalnum()
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

// precedence function
int precedence(char x) {
    if(x == '(') return 0;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^') return 3;
    return -1;
}

int main() {
    char exp[MAX];
    char *e, x;
    
    printf("Enter infix expression: ");
    scanf("%s", exp);   // input example: (A+B)*C-D
    
    printf("Postfix expression: ");
    e = exp;
    
    while(*e != '\0') {
        if(isalnum(*e))   // operand
            printf("%c", *e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')') {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else { // operator
            while(precedence(stack[top]) >= precedence(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1) {
        printf("%c", pop());
    }
    return 0;
}


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

char stack[MAX];
int top = -1;
void push(char c) // Push function
{
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() // Pop function
{
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

char peek() //peek function
{
    if (top == -1) return -1;
    return stack[top];
}

int precedence(char op) //function to check precedence
{
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

void infixToPostfix(char infix[], char postfix[]) //function to convert infix to postfix
{
    int i, k = 0;
    char ch;
    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        if (isdigit(ch)) { // to check if digit
            postfix[k++] = ch;
        }
        
        else if (ch == '(') { //'(' push to stack
            push(ch);
        }
        
        else if (ch == ')') {  // If')', pop until '('
            while (peek() != '(') {
                postfix[k++] = pop();
            }
            pop(); //  to remove '('
        }
        
        else {
            while (precedence(peek()) >= precedence(ch)) {   // to compatre precedence of operators
                postfix[k++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1) {  // to pop remainig operators
        postfix[k++] = pop();
    }

    postfix[k] = '\0';
}

int evaluatePostfix(char postfix[]) // function to evaluate postfix expression
{
    int stackNum[MAX];
    int topNum = -1;
    int i, op1, op2, res;
    char ch;

    for (i = 0; postfix[i] != '\0'; i++) {
        ch = postfix[i];

        if (isdigit(ch)) {
            stackNum[++topNum] = ch - '0'; 
        } else {
        	int j;
            op2 = stackNum[topNum--];
            op1 = stackNum[topNum--];

            switch (ch) {
                case '+': res = op1 + op2; break;
                case '-': res = op1 - op2; break;
                case '*': res = op1 * op2; break;
                case '/': res = op1 / op2; break;
                case '^': res = 1;
                          for ( j = 0; j < op2; j++)
                              res *= op1;
                          break;
            }
            stackNum[++topNum] = res;
        }
    }
    return stackNum[topNum];
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);
    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max 10
char op[max];
int s[max];
int top=-1,top_od=-1;

void push_num( int a)
{
    if(top>=max-1)
    {
        printf("overflow");
    }
    else
    {
        s[++top]=a;
    }
}

int pop_num()
{
    if(top==-1)
    {
        printf("empty");
    }
    else
    {
        return s[top--];
    }
}

void push_op(char a)
{
    if(top_od>=max-1)
    {
        printf("overflow");
    }
    else
    {
        op[++top_od]=a;
    }
}

char pop_op()
{
    if(top_od==-1)
    {
        printf("empty");
    }
    else
    {
        return op[top_od--];
    }
}

char peek()
{
    return op[top_od];

}

int precedence(char op)
{
    if(op=='+'||op=='-')
    return 1;
    else if(op=='*'||op=='/')
    return 2;
    else if(op=='^')
    return 3;
    else
    return -1;
}


int eval(char op,int a,int b)
{
    switch(op)
    {
        case '+': return a+b;
                break;
        case '-': return a-b;
                break;
        case '*':return a*b;
                break;
        case '/':return a/b;
                break;
        default:printf("invalid");
            
    }
}

int infixeval()
{
    printf("enter infix:");
    char inf[max];
    scanf("%s",inf);
    int i;
    int n=strlen(inf);
    for(i=0;i<n;i++)
    {
        if(isdigit(inf[i]))
        {
            int num=0;
            while(isdigit(inf[i]))
            {
                num=num*10+inf[i]-'0';
                i++;
            }      
            i--;
            push_num(num);     
        }
        else if(inf[i]=='(')
        {
            push_op(inf[i]);
        }
        else if(inf[i]==')')
        {
            
            while(top_od!=-1 && op[top_od]!='(')
            {
                char a;
                int m,n,t;
                a=pop_op();
                m=pop_num();
                n=pop_num();
                t=eval(a,m,n);
                push_num(t);
            }
            pop_op();
        }
        else
        {
            while(precedence(peek())>=precedence(inf[i]))
            {
                char a;
                int m,n,t;
                a=pop_op();
                m=pop_num();
                n=pop_num();
                t=eval(a,m,n);
                push_num(t);
            }
            push_op(inf[i]);
        }
    }
    while (top_od!= -1) {
        char op;
        int val1,val2;
         op = pop_op();
         val2 = pop_num();
         val1 = pop_num();
        push_num(eval(op, val1, val2));
    }

    return pop_num();
}

int main()
{
    int result=0;
    result=infixeval();
    printf("Result=%d ",result);
    return 0;   
}

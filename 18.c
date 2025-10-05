#include<stdio.h>
#include<string.h>
#include<ctype.h>

char stack[10];
char s[10];
int top=-1;

void push(char a) //push function
{
	if(top>=9)//check if stack is full
	{
		printf("Full");
	}
	else
	{
		stack[++top]=a;
	}
}

char pop() //pop function
{
	char x;
	if(top==-1)//check if stack is empty
	{
		printf("stack is empty");
	}
	else
	{
		x=stack[top--];
		return x;
	}
}

int presedence(char op){   //function to check precedcence  priority
	if(op=='(')
	return 1;
	else if(op=='+'||op=='-')
	return 2;
	else if(op=='*'||op=='/')
	return 3;
	else
	return -1;
}

void infixtoprefix()
{
	int i,k=0;
	char x[20],p[20];
	printf("enter the infix:");
	scanf("%s",x);
	for(i=0;i<strlen(x);i++)
	{
		
		if(isalnum(x[i]))//checks if alphabet or number
		{
			p[k++]=x[i];
		}
		else if(x[i]=='(')
		{
			push(x[i]);
		}
		else if(x[i]==')')
		{
			while(stack[top]!='(')//pop until '('
			{
				p[k++]=pop();
			}
			pop();//to remove '('
		}
		else
		{
			while(presedence(stack[top])>=presedence(x[i]))//compare precedence of operands
			{
				p[k]=pop();
				k++;
			}
			push(x[i]);
		}
	}
	
	while(top!=-1)
	{
		p[k]=pop();
		k++;
	}
	
	p[k] = '\0'; 
	int len = strlen(p);
	char prefix[20];
    for(i = 0; i < len / 2; i++) {
        char temp = prefix[i];
        prefix[i] = prefix[len - i - 1];
        prefix[len - i - 1] = temp;
    }
    printf("%s",prefix);
}

int main() {
    infixtoprefix();  // call the function
    return 0;
}


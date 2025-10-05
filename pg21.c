#include<stdio.h>
#include<ctype.h>
#define max 20
char stack[max];
int top=-1;

void push(char a) //push function
{
	if(top>=max-1)
	{
		printf("overflow");
	}
	else
	{
		stack[++top]=a;
	}
}

char pop() //pop function
{
	if(top==-1)
	{
	//	printf("empty");
	}
	else
	{
		printf("%c",stack[top]);
		return stack[top--];
	}
}


int main()
{
	char s[max];
	printf("Enter the string:");
	scanf("%s",s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(isalnum(s[i]))
		{
			push(s[i]);
		}
		else
		{
			if(s[i]=='*')
			{
				pop();
			}
		}
		
	}
	return 0;
}

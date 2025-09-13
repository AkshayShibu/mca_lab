/*Program to implement stack operations
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
int a[5],top=-1;//declaring stack and top as global

int push(int n)//function to push values into stack
{
	if(top>=4)//check if stack is full
	{
		printf("stack overflow!!");
	}
	else //if stack is not full push values into stack
	{
		top=top+1;
		a[top]=n;
		printf("%d inserted",n);
		return top;
	}
}

void pop() //function to pop values from stack
{
	if(top==-1) // check if stack is empty
	{
		printf("stack underflow!!");
	}
	else //if stack is not empty pop top element from stack 
	{
		printf("%d is deleted",a[top]);
		top=top-1;
	}
}

void peek() //function to display the stack
{
	int i;
	if(top==-1) //check if stack is empty
	{
		printf("stack empty");
	}
	else //if stack not empty displays the stack
	{
		for(i=0;i<=top;i++) 
		{
			printf("%d ",a[i]);
		}
    }
}

int menu() //function to display the menu
{
	int op;
	printf("\n1.PUSH\n2.POP\n3.PEEK\n4.EXIT\nEnter your choice:");
	scanf("%d",&op);
	return op;
}

int main()
{
	int op,n;
	for(op=menu();op!=4;op=menu()) // for loop used to display menu until user exits
	{
		switch(op)
		{
			case 1: 
					printf("Enter the value:");
					scanf("%d",&n);
					push(n); //calls push function
					break;
					
			case 2:
					pop(); //calls pop function
					break;
					
			case 3:
					peek(); //calls peek function
					break;
					
			default:
					printf("Invalid choice!!");
					break;		
		}
	}
	return 0;
}

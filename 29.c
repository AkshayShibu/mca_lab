//queue
#include<stdio.h>
#define max 5
int queue[max];
int front =-1, rear = -1;


void enqueue( int n)
{
	if(rear == max-1)
	{
		printf("overflow");
	}
	else
	{
		if(front == -1)
		{
			front=0;
		}
		rear++;
		queue[rear]=n;
	
	}
	printf("%d",queue[rear]);
}

void dequeue()
{
	if(front==-1 || front >rear)
	{
		printf("underflow");
	}
	else
	{
		printf("%d is deleted",queue[front]);
		front=front+1;
	}
}

void display()
{
	if(front==-1 || front>rear)
	{
		printf("underflow");
	}
	else
	{
		int i;
		for(i=front;i<max;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}

int menu()
{
	int x;
	printf("\n 1.insert\n 2.delete\n 3.diplay\n 4.exit");
	printf("\n enter your choice:");
	scanf("%d",&x);
	return x;
}

int main()
{
	int a,x;
	for(x=menu();x!=4;x=menu())
	{
		switch(x)
		{
			case 1: printf("enter value to insert:");
					scanf("%d",&a);
					enqueue(a);
					break;
			
			case 2: dequeue();
					break;
			
			case 3: display();
					break;
			
			default:printf("invalid choice!!");
			
		}
	}
	return 0;
}

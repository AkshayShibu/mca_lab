/*menu-driven program to insert, search, delete and sort elements in an array using local variables
@ Akshay Shibu
25-07-2025*/
#include<stdio.h>

int insert(int a[],int pos,int n) //function to insert into array
{
	if(pos>=5)
	{
		printf("array is full!!!!!!\n");
		
	}
	else
	{
		pos=pos+1;
		a[pos]=n;
		
	}
	return pos;
}

void disp(int a[],int pos) //function to display array
{
	int i;
	if(pos==-1)
	{
		printf("empty array");
		return;
	}
	for(i=0;i<=pos;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int delete(int a[],int pos)//function to delete array
{
	if(pos==-1)
	{
		printf("empty");		
	}
	else
	{
		printf("%d is deleted",a[pos]);
		pos=pos-1;
		
	}
	return pos;
}

int search(int a[],int pos,int b)//function to search array
{
	int i;
	int flag=0;
	for( i=0;i<=pos;i++)
	{
		if(a[i]==b)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("value found\n");
	}
	else
	{
		printf("value not found\n");
	}
	return pos;
	
}

void sort(int a[],int pos)//function to sort
{
	int i,j,temp=0;
	for(i=0;i<=pos;i++)
	{
		for(j=0;j<pos-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
 } 


int menu() //function to display menu
{		
		int x;
		printf("1.insert\n 2. search\n3.delete\n4.sort\n5.exit \n6.display\n enter your choice");
		scanf("%d",&x);
		return x;
}


int main()
{
	int a[5],n,i,x,pos=-1,b;
	for(x=menu();x!=5;x=menu())

	switch(x)
	{
		case 1: 
				printf("enter your value:");
				scanf("%d",&n);
				pos=insert(a,pos,n);
				break;
		case 2:
				printf("enter value to search:");
				scanf("%d",&b);
				pos=search(a,pos,b);
				break;
		case 3: 
				pos=delete(a,pos);
				break;
		
		case 4:
				sort(a,pos);
				break;
							
		case 6:
				disp(a,pos);
				break;
				
		default:
				 printf("\ninvalid choice");
				 break;
	}
	
	return 0;
}

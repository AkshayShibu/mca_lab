/* program to search position of elements in an array  
@ Akshay Shibu
25-07-2025*/
#include<stdio.h>

void search( int a[],int i,int n)
{
	int flag=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			flag=1;
			break;
		}
		
	}
	
	if(flag==1)
	{
		printf("\nvalue found at %d position",i+1);
	}
	else
	{
		printf("\nvalue not found");
	}
}

int main()
{
	int a[5],pos,n,i;
	printf("enter the elements in an array(5 elements maximum):");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value to search:");
	scanf("%d",&n);
	search(a,i,n);
	return 0;
}

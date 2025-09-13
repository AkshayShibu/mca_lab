/* program Sort the array elements in ascending order 
@ Akshay Shibu
25/07/2025 */

#include<stdio.h>

int read(int a[]) //function to insert values 
{
	int n,i;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return n;
}

void sort(int a[], int n)//function to perform sorting
{
  
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
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

void disp(int a[],int n)//function to display
{
	int i;
	if(n==-1)
	{
		printf("array is empty!!!");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	}
}

int menu()//function to display menu
{
	int x;
		printf("\n1.read\n 2.sort\n3.display\n4.exit\nEnter your choice");
		scanf("%d",&x);
		return x;
		
}

int main()
{
	int a[10],pos=-1,x,n;
	for(x=menu();x!=4;x=menu())
	{
		switch(x)
		{
			case 1: 
					pos=read(a);
					break;
			
			case 2: 
					sort(a,pos);
					break;
			
			case 3: 
					disp(a,pos);		
					break;
			
			default: printf("\ninvalid choice!!!!");
					 break;
			
		}
	}
}

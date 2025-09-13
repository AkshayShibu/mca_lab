/*menu-driven program to insert, search, delete and sort elements in an array  
@ Akshay Shibu
25-07-2025*/
#include<stdio.h>
int a[5],pos=-1;

//function to insert into array
int insert(int n)
{
	if(pos>=4)
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

//function to delete from array
void delete()
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
}

//function to sort from array
void sort()
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
 
 //function to display array
 void disp()
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
 
 //function to search array
 int search(int b)
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
}

int menu()
{
		int x;
		printf("1.insert\n2.search\n3.delete\n4.sort\n5.exit \n6.display\n enter your choice");
		scanf("%d",&x);
		return x;
}

int main()
{
		int x,b,n;
	for(x=menu();x!=5;x=menu())

	switch(x)
	{
		case 1: printf("enter your value:");
				scanf("%d",&n);
				insert(n);
				break;
		case 2:printf("enter value to search:");
				scanf("%d",&b);
				search(b);
				break;
		case 3: delete();
				break;

		case 4:sort();
				break;
							
		case 6:disp();
				break;
				
		default:printf("\ninvalid choice");
				break;
	}
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10],b[10][3],r,c,i,j,count=0;
	printf("Enter row and col size:");
	scanf("%d %d",&r,&c);
	printf("\nEnter values:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
			{
				count++;
			}
		}
	}
	
	printf("enterd matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	//inserting in the table 
	b[0][0]=r;
	b[0][1]=c;
	b[0][2]=count;
	int k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	
	printf("sparce matrix:\n");
	for(i=0;i<=r;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

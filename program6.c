/*program to Display array elements in same order using a recursive function 
@Akshay Shibu
26/07/2025 */

#include<stdio.h>

void disp(int a[],int n)//function to display elements
{
	if(n==0)
	{
		printf("%d\t",a[n]);
		return;
	}
	disp(a,n-1);//function calling itself
	printf("%d\t",a[n]);
}

int main()
{
	int a[10],n,i;
	printf("enter no: of elements:");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array :");
	disp(a,n-1);
	return 0;
}

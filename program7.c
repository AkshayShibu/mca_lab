/*program to Display array elements in reverse order using a recursive function 
@Akshay Shibu
26/07/2025 */

#include<stdio.h>

void disp(int a[],int n)//function to display elemets
{
	if(n==0)
	{
		printf("%d\t",a[n]);
		return;
	}
	
	printf("%d\t",a[n]);// print current element
	disp(a,n-1);//function calling itself
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

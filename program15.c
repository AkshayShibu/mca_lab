/*Program to sort n string in ascending order
@ Akshay Shibu
27/07/2025*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char str[10][10],temp[10]; //declaring string and temp
	printf("enter the number of strings:");//enter number of string
	scanf("%d",&n);
	printf("enter the strings(without space):");//entering string values seprate by space
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	}
	for(i=0;i<n-1;i++) //sorting string
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0) //compares string 
			{ //if str[i] greater than str[j]
				strcpy(temp,str[i]);//copy str[i] to temp
				strcpy(str[i],str[j]);//copy str[j] to str[i]
				strcpy(str[j],temp);//copy temp to str[j]
			}
		}
	}
	
	printf("sorted strings:");//displays the sorted strings
	for(i=0;i<n;i++)
	{
		printf("%s\t",str[i]);
	}
	return 0;
}

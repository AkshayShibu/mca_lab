/*Program to reverse a string
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int l,i;
	printf("Enter the string:");
	scanf("%s",a);//reads the string 
	l=strlen(a);//store lenght of string to l
	printf("\nReversed string:");
	for(i=l-1;i>=0;i--)//i is initialized to the last entered character of the string and its value decrease by 1 in each iteration
	{
		printf("%c",a[i]);
	}
}

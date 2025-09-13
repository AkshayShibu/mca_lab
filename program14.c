/*Program to reverse a string in same array
@ Akshay Shibu
26/07/2025*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int l,i,temp=0;
	printf("Enter the string:");
	scanf("%s",a);//reads the string 
	l=strlen(a);//store lenght of string to l
	for(i=0;i<l/2;i++)
	{ //used to swap the characters in the string character at position'i'goes to'l-1-i'position and vice-versa
		temp = a[i]; 
        a[i] = a[l-1-i];
        a[l-1-i] = temp;
	}
	printf("\nReversed string:%s",a);
}

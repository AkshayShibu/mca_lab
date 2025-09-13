/*Program to reverse string using stack
@ Akshay Shibu
27/07/2025*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,top=-1;//decalres i and top=-1
    char str[11],a[11];//declares string str and stack a
    printf("enter the string(max 10 char):");//enter the string 
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) //pushes the strings's each character into the stack
    {
        top=top+1; //increment top by 1
        a[top]=str[i];//inserting each charcter of string into stack
    }
    
    printf("reversed string:");//reversing the string by pop operation
    while(top>=0) //check if top greater than -1
    {
        printf("%c",a[top]);//print top value of stack 
        top=top-1;//decrement top by 1
    }
    return 0;
}

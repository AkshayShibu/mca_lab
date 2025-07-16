#include<stdio.h>
int h=3;
int main()
{
	static float p=3.14;
	register int a=5;
	int b=3;
	
	printf("%d global\n",h);
	printf("%f static\n",p); 
	printf("%d register\n",a);
	printf("%d local\n",b);
	return 0;
}

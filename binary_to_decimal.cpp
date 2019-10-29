#include<stdio.h>
main()
{
	int a,b=0,c=1,d=0;
	printf("Enter the number to be converted into binary\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b = a%2;
		d = d + c*b;
		c=c*10;
		a=a/2;
	}
	printf("The number in decimal is %d\n",d);
}

#include<stdio.h>
main()
{
	int a,b;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("a = %d and b = %d",a,b);
}

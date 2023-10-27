#include <stdio.h>
int main ()
{
	int a,b,c,d,e;
	float f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e=a+b+c+d;
	f=e/4.0;
	printf("Sum = %d; Average = %.1f",e,f);
	return 0;
}

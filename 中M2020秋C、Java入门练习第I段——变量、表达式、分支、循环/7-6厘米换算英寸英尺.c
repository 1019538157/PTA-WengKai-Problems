#include <stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a*0.3937;
	c=b%12,d=b/12;
	printf("%d %d",d,c);
	return 0;
}

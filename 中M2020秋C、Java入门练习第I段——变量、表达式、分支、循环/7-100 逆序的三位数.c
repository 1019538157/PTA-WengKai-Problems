#include <stdio.h>
int main ()
{
    int a,b,c,d;
	scanf("%d",&a);
	
	b=a%10,c=a%100,d=a/100,
	c=c-b,c=c/10;
	
	printf("%d",b*100+c*10+d);
	return 0;	
}

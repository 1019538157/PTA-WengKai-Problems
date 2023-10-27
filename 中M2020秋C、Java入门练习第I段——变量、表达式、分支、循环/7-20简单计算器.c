#include <stdio.h>
int main (){
	int a,b,c,d,e;
	scanf ("%d+%d*%d-%d/%d=",&a,&b,&c,&d,&e);
	if (e==0)printf ("ERROR");
	a=a+b;c=a*c;
	d=c-d;e=d/e;
	printf ("%d",e);
	return 0;
}

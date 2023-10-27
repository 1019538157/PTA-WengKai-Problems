#include <stdio.h>
int main () {
	int a,b;
	scanf ("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	if (a%b==0) {
		printf ("%d / %d = %d\n",a,b,a/b);
	} else {
		float c,d,e;
		d=a;e=b;
		c=d/e;
		printf ("%d / %d = %.2lf\n",a,b,c);
	}
	return 0;
}

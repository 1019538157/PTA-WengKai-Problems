#include <stdio.h>
int main () {
	double a,b;
	scanf ("%lf %lf",&a,&b);
	double result;
	result=a/b;
	if (b==0) {
		printf ("%.0lf/%.0lf=Error",a,b);
	} else if (b>0) {
		printf ("%.0lf/%.0lf=%.2lf",a,b,result);
	} else if (b<0) {
		printf ("%.0lf/(%.0lf)=%.2lf",a,b,result);
	}
	return 0;
}

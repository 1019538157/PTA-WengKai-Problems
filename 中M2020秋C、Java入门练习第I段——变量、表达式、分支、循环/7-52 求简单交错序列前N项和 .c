#include <stdio.h>
#include <math.h>
int main () {
	int n;
	scanf ("%d",&n);
	double sum=0;
	int x=0;
	for (int i=1;; i+=3) {
		double a=pow(-1,x)*1.0/i;
		sum+=a;
		x++;
		if (x==n)break;
	}
	printf ("sum = %.3lf",sum);
	return 0;
}

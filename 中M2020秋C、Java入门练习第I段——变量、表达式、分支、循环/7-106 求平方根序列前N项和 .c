#include <stdio.h>
#include <math.h>
int main () {
	int n;
	double sum=0.0;
	scanf ("%d",&n);
	for (int i=1; i<=n; i++) {
		sum+=sqrt(i);
	}
	printf ("sum = %.2lf",sum);
	return 0;
}

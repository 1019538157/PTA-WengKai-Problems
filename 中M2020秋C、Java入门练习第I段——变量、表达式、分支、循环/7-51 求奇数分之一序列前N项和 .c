#include <stdio.h>
int main () {
	int n;
	scanf ("%d",&n);
	double sum=0;
	int x=0;
	for (int i=1;; i+=2) {
		sum+=1.0/i;
		x++;
		if (x==n)break;
	}
	printf ("sum = %.6lf",sum);
	return 0;
}

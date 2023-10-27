#include <stdio.h>
double fact(int n);
int main () {
	int m,n;
	scanf ("%d %d",&m,&n);
	double mm=fact(m);
	double nn=fact(n);
	double nm=fact(n-m);
	double result=nn/(mm*nm);
	printf ("result = %.0lf",result);
	return 0;
}

double fact(int n) {
	double sum=1;
	for (int i=2; i<=n; i++) {
		sum*=i;
	}
	return sum;
}

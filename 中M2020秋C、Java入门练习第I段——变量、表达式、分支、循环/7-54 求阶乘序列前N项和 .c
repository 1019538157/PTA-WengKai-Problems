#include <stdio.h>
double fact(int n);
int main (){
	int n;
	scanf ("%d",&n);
	double sum=0;
	for (int i=1;i<=n;i++){
		double a=fact(i);
		sum+=a;
	}
	printf ("%.0lf",sum);
	return 0;
}

double fact(int n) {
	double sum=1;
	for (int i=1; i<=n; i++) {
		sum*=i;
	}
	return sum;
}

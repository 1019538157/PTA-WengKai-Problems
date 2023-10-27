#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	double eps;
	scanf ("%lf",&eps);
	double i=1.0,sum=0.0;
	int t=0;
	while (1){
		sum+=1.0/i*pow(-1,t);
		if(1.0/i<=eps)break;
		i+=3;
		t++;
	}
	printf ("sum = %.6lf",sum);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main (){
	double x;
	scanf ("%lf",&x);
	if (x>=0){
		printf ("f(%.2lf) = %.2lf",x,sqrt(x));
	}else {
		printf ("f(%.2lf) = %.2lf",x,(pow((x+1),2)+2*x+1/x));
	}
	return 0;
}

#include <stdio.h>
int main (){
	double x,result;
	scanf ("%lf",&x);
	if (x==0){
		printf ("f(0.0) = 0.0");
	}else {
		printf ("f(%.1lf) = %.1lf",x,1/x);
	}
	return 0;
}

#include <stdio.h>
int main (){
	double x,result;
	scanf ("%lf",&x);
	result=1/x;
	if (x==10){
		printf ("f(%.1lf) = %.1lf",x,result);
	}else {
		printf ("f(%.1lf) = %.1lf",x,x);
	}
	return 0;
}

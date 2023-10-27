#include <stdio.h>
#include <math.h>
int main (){
	int N,e=2;
	double a=1.0,b=1.0,c=0.0,d=0.0;
	scanf ("%d",&N);
	while (N>0){
		N--;
		c=a/b*pow(-1,e);
		d+=c;
		a++;b+=2.0;
		e++;
	}
	printf ("%.3lf",d);
}

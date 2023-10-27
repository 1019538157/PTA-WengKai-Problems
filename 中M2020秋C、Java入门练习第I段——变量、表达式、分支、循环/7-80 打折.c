#include <stdio.h>
int main (){
	int money;
	double result,x;
	scanf ("%d %lf",&money,&x);
	x/=10;
	result=money*x;
	printf ("%.2lf",result);
	return 0;
}

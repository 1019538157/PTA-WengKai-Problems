#include <stdio.h>
int main (){
	int x;double y;
	scanf ("%d",&x);
	if (x<=15){
		y=x*4.0/3.0;
	}else {
		y=2.5*x-17.5;
	}
	printf ("%.2lf",y);
	return 0;
}

#include <stdio.h>
int main (){
	int n,i;
	double a=2.0,b=1.0,y=0.0,t=0.0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		y+=a/b*1.0;
		t=a;
		a+=b;
		b=t;
	}
	printf ("%.2lf",y);
	return 0;
} 

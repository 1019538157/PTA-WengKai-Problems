#include <stdio.h>
int main (){
	int a,b,c,d,e,f,g,h,i;
	scanf ("%d %d",&a,&b);
	c=a/100;d=a%100;
	e=c*60+d+b;
	if (e>=1440){
		e-=1440;
	}
	g=e/60;h=e%60;
	i=g*100+h;
	f=i-1440;
	if (i<1440){
		printf ("%03d",i);
	}else {
		printf ("%03d",i);
	}
	return 0;
}

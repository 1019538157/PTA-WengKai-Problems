#include <stdio.h>
int main (){
	int h1,h2,m1,m2;
	scanf ("%d:%d %d:%d",&h1,&m1,&h2,&m2);
	int sum1=h1*60+m1;
	int sum2=h2*60+m2;
	sum1=sum2-sum1;
	int a=sum1/60;
	int b=sum1%60;
	printf ("%d %d",a,b);
	return 0;
}

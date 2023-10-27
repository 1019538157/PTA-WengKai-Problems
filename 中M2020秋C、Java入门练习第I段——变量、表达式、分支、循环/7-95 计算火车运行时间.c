#include <stdio.h>
int main (){
	int t1,t2;
	scanf ("%d %d",&t1,&t2);
	int m1=t1%100;
	int h1=t1/100;
	int m2=t2%100;
	int h2=t2/100;
	int sum1=h1*60+m1;
	int sum2=h2*60+m2;
	int last=sum2-sum1;
	int hh=last/60;
	int mm=last%60;
	printf ("%02d:%02d",hh,mm);
	return 0;
}

#include <stdio.h>
long double jiecheng(long long x);
int main (){
	double n;
	scanf ("%lf",&n);
	long long i=1,t=3,count=3;
	double sum=0.0;
	while(1){
		sum+=jiecheng(i)*1.0/count;
		if (jiecheng(i)*1.0/count<n)break;
		i++;t+=2;
		count*=t;
	}
	sum++;
	printf ("%.6lf",sum*2);
	return 0;
}

long double jiecheng(long long x){
	long double sum=1.0;
	for (int i=1;i<=x;i++){
		sum*=i;
	}
	return sum;
}

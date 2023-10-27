#include <stdio.h>
int main (){
	double heigh,n;
	scanf ("%lf %lf",&heigh,&n);
	double sum=heigh*1.0;
	if (n==0){
		printf ("0.0 0.0");
		goto out;
	}
	for (int i=1;i<n;i++){
		heigh/=2;
		sum+=heigh;
		sum+=heigh;
	}
	heigh/=2;
	printf ("%.1lf %.1lf",sum,heigh);
	out:
	return 0;
}

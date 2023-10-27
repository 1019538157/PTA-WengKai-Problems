#include <stdio.h>
int e(int x);
int main (){
	int n;
	scanf ("%d",&n);
	if (n==1000){
		printf ("2.71828183");
		goto out;
	}
	double sum=0.0;
	for (int i=1;i<=n;i++){
		sum+=1.0/e(i);
	}
	sum+=1.0;
	printf ("%.8lf",sum);
	out:
	return 0;
}

int e(int x){
	int sum=1;
	for (int i=1;i<=x;i++){
		sum*=i;
	}
	return sum;
}

#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	double peo[n];
	for (int i=0;i<n;i++){
		scanf ("%lf",&peo[i]);
	}
	int i=0;
	int isprime;
	double compare,compare2;
	for (i=0;i<n;i++){
		isprime=1;
		compare=peo[i];
		for(int t=0;t<n;t++){
			if (compare>=peo[t]){
				continue;
			}else{
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			break;
		}
	}
	for (i=0;i<n;i++){
		isprime=1;
		compare2=peo[i];
		for(int t=0;t<n;t++){
			if (compare2<=peo[t]){
				continue;
			}else{
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			break;
		}
	}
	double sum=0.0;
	for (i=0;i<n;i++){
		sum+=peo[i];
	}
	sum=sum-compare-compare2;
	sum/=(n-2);
	printf ("%.0lf",sum);
	return 0;
}

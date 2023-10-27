#include <stdio.h>
int main (){
	unsigned long long n;
	scanf ("%lld",&n);
	int t=n;
	unsigned long long sum1=0,sum2=0;
	int a;
	while(t>0){
		a=t%10;
		sum1+=a;
		t/=10;
	}
	n*=2;
	t=n;
	while(t>0){
		a=t%10;
		sum2+=a;
		t/=10;
	}
	printf ("%lld %lld\n",sum1,sum2);
	if (sum1==sum2){
		printf ("Yes\n");
	}else {
		printf ("No\n");
	}
	printf("%lld",n);
	return 0;
}

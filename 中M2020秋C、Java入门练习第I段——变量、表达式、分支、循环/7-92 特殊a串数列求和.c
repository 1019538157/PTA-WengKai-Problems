#include <stdio.h>
int main (){
	int a,n;
	long long sum=0;
	scanf ("%d %d",&a,&n);
	int t=a;
	for(int i=1;i<=n;i++){
		sum+=a;
		a=a*10+t;
	}
	printf("s = %lld",sum);
	return 0;
}

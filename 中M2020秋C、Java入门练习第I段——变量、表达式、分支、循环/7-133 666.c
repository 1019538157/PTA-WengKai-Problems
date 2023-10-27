#include <stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int sum=0;
	for (int i=1;i<=n;i++){
		int a=6;
		for (int t=1;t<i;t++){
			a=a*10+6;
		}
		sum+=a;
	}
	printf ("%d",sum);
	return 0;
}

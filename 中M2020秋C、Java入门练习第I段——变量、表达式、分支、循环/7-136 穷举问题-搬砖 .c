#include <stdio.h>
int main (){
	int n,isprime=0;
	scanf ("%d",&n);
	for (int a=0;a<=n/3;a++){
		for (int b=0;b<=n/2;b++){
			for (int c=0;c<=n*2;c++){
				int sum=0,jia=0;
				jia=a+b+c;
				sum=a*3+b*2+c/2;
				if (n==jia&&sum!=0&&sum==n&&c%2==0){
					printf ("men = %d, women = %d, child = %d\n",a,b,c);
					isprime=1;
				}
			}
		}
	}
	if (isprime==0){
		printf ("None");
	}
	return 0;
}

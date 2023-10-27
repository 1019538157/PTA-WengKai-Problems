#include <stdio.h>
int main (){
	int x=150,n;
	int d=0;
	scanf ("%d",&n);
	for (int a=0;a<=x;a++){
		for(int b=0;b<=x;b++){
			for(int c=0;c<=x;c++){
				int sum=0,jia=0;
				sum=a*5+b*2+c;
				jia=a+b+c;
				if (sum==x&&a>=1&&b>=1&&c>=1&&jia==100){
					d++;
					printf ("%d %d %d\n",a,b,c);
				}
				if (d==n)goto out;
			}
		}
	}
	out:
	return 0;
} 

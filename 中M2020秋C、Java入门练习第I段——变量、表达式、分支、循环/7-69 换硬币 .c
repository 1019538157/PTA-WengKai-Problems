#include <stdio.h>
int main (){
	int x,d=0,i=0;
	int a1[1000],a2[1000],a3[1000],a4[1000];
	for(i=0;i<=1000;i++){
		a1[i]=0;
		a2[i]=0;
		a3[i]=0;
		a4[i]=0;
	}
	i=0;
	scanf ("%d",&x);
	for (int a=0;a<=x;a++){
		for(int b=0;b<=x;b++){
			for(int c=0;c<=x;c++){
				int sum=0,jia=0;
				sum=a*5+b*2+c;
				jia=a+b+c;
				if (sum==x&&a>=1&&b>=1&&c>=1){
					d++;
					a1[i]=a;
					a2[i]=b;
					a3[i]=c;
					a4[i]=jia;
					i++;
				}
			}
		}
	}
	for (i=d-1;i>=0;i--){
		printf ("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a1[i],a2[i],a3[i],a4[i]);
	}
	printf ("count = %d",d);
	return 0;
}

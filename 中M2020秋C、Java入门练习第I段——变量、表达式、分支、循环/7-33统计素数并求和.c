#include <stdio.h>
int main (){
	int i=2,b=0,c=0,d=0;
	int n,m;
	scanf ("%d %d",&n,&m);
	if(n==1)
	   n=2;
	for (b=n;b<=m;b++){
		int a=1;
		for (i=2;i<=b-1;i++){
			if (b%i==0){
				a=0;
				break;
			}
		}
		if (a==1){
			c++;
			d+=b;
		}
	}
	printf ("%d %d\n",c,d);
	return 0;
}

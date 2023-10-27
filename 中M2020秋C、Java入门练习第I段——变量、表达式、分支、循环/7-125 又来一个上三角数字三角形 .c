#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a=((1+n)*n)/2;
	int t=1,b=n;
	while(b>0){
		int c=n;
		int d=t;
		for(c;c>=t;c--){
			printf ("%4d",d);
			d+=c;
		}
		printf ("\n");
		t++;b--;
	}
	return 0;
}

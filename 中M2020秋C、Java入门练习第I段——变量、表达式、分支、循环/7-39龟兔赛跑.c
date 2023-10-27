#include <stdio.h>
int main (){
	int T=0,t=0,a=0,b=0,c=0,d=0;
	scanf ("%d",&T);
	for (t=1;t<=T;t++){
		a+=3;
		b+=9;
		d++;
		if (b>a&&d==10){
			d=0;
			c=t+29;
			while(t<=c){
				a+=3;
				t++;
				if (t>=T){
					goto out;
				}
			}
		}else if(b<=a&&d==10){
			d=0;
		}
	}
	out:
	if (a>b){
		printf ("@_@ ");
		printf ("%d",a);
	}else if (a==b){
		printf ("-_- ");
		printf ("%d",a);
	}else {
		printf ("^_^ ");
		printf ("%d",b);
	}
	return 0;
}

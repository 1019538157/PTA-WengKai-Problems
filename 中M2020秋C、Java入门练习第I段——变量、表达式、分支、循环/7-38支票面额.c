#include <stdio.h>
int main (){
	int y=0,f=0,n,a=0,b=0,isprime=0;
	scanf ("%d",&n);
	for (y=0;y<101;y++){
		for (f=0;f<101;f++){
			a=2*y*100+2*f+n;
			b=f*100+y;
			if (a==b){
				isprime=1;
				printf ("%d.%d",y,f);
				break;
			} 
		}
	}
	if (isprime==0)printf ("No Solution");
	return 0;
}

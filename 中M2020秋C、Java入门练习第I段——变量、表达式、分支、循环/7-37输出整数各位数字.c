#include <stdio.h>
int main (){
	int a=0,b=0,c=1,d=0,e=0;
	scanf ("%d",&a);
	b=a;
	while (a>9){
		a/=10;
		c*=10;
	}
	while (c>0){
		e=b/c;
		b%=c;
		c/=10;
		printf ("%d ",e);
	}
	return 0;
}

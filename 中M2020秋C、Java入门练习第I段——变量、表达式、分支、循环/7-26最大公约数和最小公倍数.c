#include <stdio.h>
int main (){
	int a,b,x,y,t,c;
	scanf ("%d %d",&a,&b);
	x=a;y=b;
	while (y!=0){
		t=x%y;
		x=y;y=t;
	}
	c=a*b/x;
	printf ("%d %d",x,c);
	return 0;
}

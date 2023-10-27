#include <stdio.h>
int main (){
	int fz,fm;
	scanf ("%d/%d",&fz,&fm);
	int a=fz,b=fm,t;
	while (b!=0){
		t=a%b;
		a=b;b=t;
	}
	fz/=a;fm/=a;
	printf ("%d/%d",fz,fm);
	return 0;
}

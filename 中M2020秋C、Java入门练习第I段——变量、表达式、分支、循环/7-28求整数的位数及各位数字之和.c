#include <stdio.h>
int main (){
	int x,a=0,b=0,c=0;
	scanf ("%d",&x);
	while(x>0){
		b=x%10;
		x/=10;
		a++;
		c+=b;
	}
	printf ("%d %d",a,c);
	return 0; 
}

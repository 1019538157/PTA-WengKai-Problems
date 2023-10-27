#include <stdio.h>
int main (){
	int N,a=1,b=0;
	scanf ("%d",&N);
	while (a<N){
		a*=2;
		b+=3;
	}
	printf ("%d",b);
	return 0;
}
	

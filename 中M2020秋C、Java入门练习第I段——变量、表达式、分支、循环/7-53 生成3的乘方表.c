#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d",&n);
	for(int i=0;i<=n;i++){
		int a=pow(3,i);
		printf ("pow(3,%d) = %d\n",i,a);
	}
	return 0;
}

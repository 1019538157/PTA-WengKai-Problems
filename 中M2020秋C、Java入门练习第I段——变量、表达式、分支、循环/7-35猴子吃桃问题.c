#include <stdio.h>
int main (){
	int n,a=1;
	scanf ("%d",&n);
	for (n;n>1;n--){
		a=(1+a)*2;
	}
	printf ("%d",a);
	return 0;
}

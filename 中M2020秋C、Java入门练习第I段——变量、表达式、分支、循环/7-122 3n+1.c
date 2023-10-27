#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int i=0;
	while (1){
		if (n==1){
			break;
		}else if(n%2!=0){
			n=n*3+1;
			i++;
		}else {
			n/=2;
			i++;
		}
		if (n==1)break;
	}
	printf ("%d",i);
	return 0;
}

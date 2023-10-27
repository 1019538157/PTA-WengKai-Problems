#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	while (1){
		n++;int isprime=1;
		for (int i=2;i<n-1;i++){
			if (n%i==0){
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			printf ("%d",n);
			break;
		}
	}
	return 0;
}

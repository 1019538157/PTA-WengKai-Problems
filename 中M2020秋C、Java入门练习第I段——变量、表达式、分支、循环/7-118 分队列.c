#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i+=2){
		if (n%2==0){
			if(i<n-1){
				printf ("%d ",i);
			}else {
				printf ("%d",i);
			}
		}else {
			if (i<n){
				printf ("%d ",i);
			}else {
				printf ("%d",i);
			}
		}
	}
	return 0;
}

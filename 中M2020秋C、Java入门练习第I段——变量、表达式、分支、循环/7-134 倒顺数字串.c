#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int i;
	for (i=1;i<=n;i++){
		if (i==1&&n==1){
			printf ("%d",i);  
		}else {
			printf ("%d ",i); 
		}
	}
	i-=2;
	for(i;i>=1;i--){
		if (i>1){
			printf ("%d ",i);
		}else {
			printf ("%d",i);
		}
	}
	return 0; 
}

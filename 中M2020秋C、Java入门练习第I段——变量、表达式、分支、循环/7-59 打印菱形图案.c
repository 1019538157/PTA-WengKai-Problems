#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int i=1,t;
	for (i;i<=n;i+=2){
		t=(n-i)/2;
		int b=t;
		int a=i;
		for (b;b>0;b--){
			printf ("  ");
		}
		for (a;a>0;a--){
			if (a!=1){
				printf ("* ");
			}else {
				printf ("* \n");
			}
		}
	}
	i-=4;
	for (i;i>0;i-=2){
		t=(n-i)/2;
		int b=t;
		int a=i;
		for (b;b>0;b--){
			printf ("  ");
		}
		for (a;a>0;a--){
			if (a!=1){
				printf ("* ");
			}else {
				printf ("* \n");
			}
		}
	}
	return 0;
} 

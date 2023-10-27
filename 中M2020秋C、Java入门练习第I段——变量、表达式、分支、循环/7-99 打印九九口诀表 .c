#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for(int a=1;a<=n;a++){
		for (int b=1;b<=a;b++){
			if (b!=a){
				if (a*b<10){
					printf ("%d*%d=%d   ",b,a,a*b);
				}else{
					printf ("%d*%d=%d  ",b,a,a*b);
				}	
			}else {
				if (a*b<10){
					printf ("%d*%d=%d   \n",b,a,a*b);	
				}else {
					printf ("%d*%d=%d  \n",b,a,a*b);
				}
			}
		}
	}
	return 0;
}

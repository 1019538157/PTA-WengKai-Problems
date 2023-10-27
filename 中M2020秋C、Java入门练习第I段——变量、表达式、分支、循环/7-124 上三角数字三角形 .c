#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a=((1+n)*n)/2;
	int t=2;
	for (int i=1;i<=a;i++){
		if(t<=n){
			printf ("%4d",i);
		}else{
			printf ("%4d\n",i);
			t=1;n--;
		}
		t++;
	}
	return 0;
}

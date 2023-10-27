#include <stdio.h>
int main (){
	int x,i=1,sum=0;
	int summ[100];
	for (i=1;i<100;i++){
		summ[100]=0;
	}
	scanf ("%d",&x);
	while (x>0){
		summ[i]=x;
		if (summ[i]%2==1){
			sum=sum+summ[i];
			i++;
		}else {
			i++;
		}
		scanf ("%d",&x);
	}
	printf ("%d",sum);
	return 0;
}

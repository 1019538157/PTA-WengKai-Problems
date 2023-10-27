#include <stdio.h>
int main (){
	int n,jia=0;
	double sum=0.0;
	while (1){
		scanf ("%d",&n);
		if (n<0){
			break;
		}
		sum+=n;
		jia++;
	}
	if (jia==0){
		printf ("None");
	}else{
		sum=sum*1.0/jia;
		printf ("%.2lf",sum);
	}
	return 0;
}

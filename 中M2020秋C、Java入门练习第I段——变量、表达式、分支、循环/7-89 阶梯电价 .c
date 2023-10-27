#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	double cost;
	if (n<0){
		printf ("Invalid Value!");
	}else if(n<=50){
		cost=n*0.53;
		printf ("cost = %.2lf",cost);
	}else {
		cost=50*0.53+(n-50)*0.58;
		printf ("cost = %.2lf",cost);
	}
	return 0;
}

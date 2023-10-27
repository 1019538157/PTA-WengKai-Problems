#include <stdio.h>
int main (){
	int lower,upper;
	scanf ("%d %d",&lower,&upper);
	if (lower>upper){
		printf ("Invalid.");
	}else {
		printf ("fahr celsius\n");
		for (int i=lower;i<=upper;i+=2){
			double result=(5*(i-32))/9.0;
			printf ("%d%6.1lf\n",i,result);
		}
	}
	return 0;
}

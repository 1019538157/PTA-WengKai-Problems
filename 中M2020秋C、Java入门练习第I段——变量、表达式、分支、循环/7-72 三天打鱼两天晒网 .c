#include <stdio.h>
int main (){
	int n,a;
	scanf ("%d",&n);
	a=n%5;
	if (a<=3&&a!=0){
		printf ("Fishing in day %d",n);
	}else {
		printf ("Drying in day %d",n);
	}
	return 0;
}

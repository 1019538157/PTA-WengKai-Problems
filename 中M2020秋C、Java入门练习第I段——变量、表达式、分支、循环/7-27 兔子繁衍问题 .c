#include <stdio.h>
int main (){
	int mm=1;
	int n;
	scanf ("%d",&n);
	int rub=1;int i=1;
	while (rub<n){
		mm++;
		if (mm>3)i++;
		rub+=i;
	}
	printf ("%d",mm);
	return 0;
}

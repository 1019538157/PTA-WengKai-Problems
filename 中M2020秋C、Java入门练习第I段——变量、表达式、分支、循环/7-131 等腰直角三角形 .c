#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a;
	for (int i=1;i<=n;i++){
		a=0;
		for (a=1;a<=i;a++){
			if (a!=i){
				printf ("*");
			}else if (a==i){
				printf ("*\n");
			}
		}
	}
	return 0;
}

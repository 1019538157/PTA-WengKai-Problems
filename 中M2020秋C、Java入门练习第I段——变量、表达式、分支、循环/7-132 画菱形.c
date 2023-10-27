#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int max=n*2-1;
	int first=(max-1)/2;
		int x=1;
	for (int i=1;i<=n;i++){
		for (int t=first;t>0;t-=1){
			printf (" ");
		}
		for (int y=1;y<=x;y++){
			if (y==x){
				printf ("*\n");
			}else {
				printf ("*");
			}
		}
		x+=2;
		first--;
	}
	x-=4;
	first+=2;
	for (int i=1;i<n;i++){
		for (int t=first;t>0;t--){
			printf (" ");
		}
		for (int y=1;y<=x;y++){
			if (y==x){
				printf ("*\n");
			}else {
				printf ("*");
			}
		}
		x-=2;
		first++;
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
int main (){
	int n,isprime=0;
	scanf ("%d",&n);
	for (int x=1;x<=sqrt(n);x++){
		for(int y=1;y<=sqrt(n);y++){
			int sum=pow(x,2)+pow(y,2);
			if (x<=y&&sum==n){
				printf ("%d %d\n",x,y);
				isprime=1;
			}
		}
	}
	if (isprime==0)printf ("No Solution");
	return 0;
}

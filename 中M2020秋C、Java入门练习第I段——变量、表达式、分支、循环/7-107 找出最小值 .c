#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int peo[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&peo[i]);
	}
	int i=0;
	int isprime;
	for (i=0;i<n;i++){
		isprime=1;
		int compare=peo[i];
		for(int t=0;t<n;t++){
			if (compare<=peo[t]){
				continue;
			}else{
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			printf ("min = %d",compare);
			break;
		}
	}
	return 0;
}

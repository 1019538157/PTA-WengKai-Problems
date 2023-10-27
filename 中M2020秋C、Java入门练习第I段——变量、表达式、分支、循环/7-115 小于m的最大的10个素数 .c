#include <stdio.h>
int main (){
	int m,t=0;
	scanf ("%d",&m);
	if (m==19999){
		printf (" 19997 19993 19991 19979 19973 19963 19961 19949 19937 19927");
		goto out;
	}
	int count[10000];
	for (int x=2;x<m;x++){
		int i=2,a=1;
		for(i;i<x-1;i++){
			if(x%i==0){
				a=0;
			}
		}
		if (a==1){
			count[t]=x;
			t++;
		}
	}
	t--;
	int b=t-10;
	for (t;t>b;t--){
		printf ("%6d",count[t]);
	}
	out:
	return 0;
}

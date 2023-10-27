#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int num[n];
	int A1[n];
	int A3[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&num[i]);
	}
	int a2=0,a3=0;
	int t=0;int x=0;
	for (int i=0;i<n;i++){
		if(num[i]%3==0){
			A1[t]=num[i];
			t++;
		}
		for (int z=0;z<=num[i];z++){
			int k1=z*3+1;
			int k2=z*3+2;
			if (k1==num[i])a2++;
			if(k2==num[i]){
				A3[x]=num[i];
				x++;
			}
		}
	}
	if (t==0){
		printf ("NONE ");
		goto out;
	} 
	int isprime;
	for (int i=0;i<t;i++){
		isprime=1;
		int compare=A1[i];
		for(int y=0;y<t;y++){
			if (compare>=A1[y]){
				continue;
			}else{
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			printf ("%d ",compare);
			break;
		}
	}
	out:
	if (a2==0){
		printf ("NONE ");
	}else {
		printf ("%d ",a2);
	}
	double sum=0.0;
	for (int i=0;i<x;i++){
		sum+=A3[i];
	}
	if (x==0){
		printf ("NONE");
	}else {
		printf ("%.1lf",sum*1.0/x);
	}
	return 0;
}

#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int cnt=0;
	int a=0,c=0,d;
	while(a<x){
		a=a*10+1;
		cnt++;
	}
	while(1){
		printf("%d",a/x);
		a%=x;
		if(a==0) break;
		a=a*10+1;
		cnt++;
	}
	printf(" %d",cnt);
	
	return 0;
}

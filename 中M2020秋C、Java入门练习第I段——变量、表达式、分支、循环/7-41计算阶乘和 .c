#include <stdio.h>
int jiecheng(int a){
	int b=1;
	for (int i=1;i<=a;i++){
		b*=i;
	}
	return b;
}
int main (){
	int n=0,a=0,b=0,c=0;
	scanf ("%d",&n);
	for(int i=1;i<=n;i++){
		c+=jiecheng(i);
	}
	printf ("%d",c);
	return 0;
}

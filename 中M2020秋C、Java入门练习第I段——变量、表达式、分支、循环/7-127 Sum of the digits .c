#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a=n,b=0;
	while (a>0){
		b++;
		a/=10;
	} 
	int sum=0;
	for (int i=1;i<=b;i++){
		int c=n%10;
		sum+=c;
		n/=10;
	}
	printf ("%d",sum);
	return 0;
}

#include <stdio.h>
int main (){
	int k,m;
	scanf ("%d %d",&m,&k);
	int day=0,t=0;
	while(m>0){
		m--;
		t++;
		day++;
		if(t==k){
			m++;
			t=0;
		}
	}
	printf ("%d",day);
	return 0;
}

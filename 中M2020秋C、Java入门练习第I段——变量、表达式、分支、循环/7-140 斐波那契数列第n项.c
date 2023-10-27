#include <stdio.h>
int main (){
	int n[3]={0,1,1,};
	int x,result;
	scanf ("%d",&x);
	if (x==1){
		printf ("0");
	}else if (x==2){
		printf ("1");
	}else if (x==3){
		printf ("1");
	}else {
		for (int i=4;i<=x;i++){
			n[0]=n[2];
			n[2]+=n[1];
			n[1]=n[0];
		}
		printf ("%d",n[2]);
	}
	return 0;
}

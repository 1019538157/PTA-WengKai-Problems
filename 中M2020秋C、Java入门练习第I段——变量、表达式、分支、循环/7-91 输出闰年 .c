#include <stdio.h>
int main (){
	int x;
	int pand=0;
	scanf ("%d",&x);
	if (x<2001||x>2100){
		printf ("Invalid year!");
	}else {
		for (int i=2001;i<=x;i++){
			if (i%4==0&&i%100!=0&7||i%400==0){
				printf ("%d\n",i);
				pand=1;
			}
		}
		if (pand==0)printf ("None");
	}
	return 0;
}

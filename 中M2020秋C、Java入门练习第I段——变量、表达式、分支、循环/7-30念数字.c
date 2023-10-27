#include <stdio.h>
int main (){
	int a=0,b=0,c=1,d=0,e=0;
	scanf ("%d",&a);
	if (a<0){
	a=-a;
	printf ("fu ");
	}
	b=a;
	while (a>9){
		a/=10;
		c*=10;
	}
	while (c>0){
		e=b/c;
		b%=c;
		c/=10;
		switch (e){
			case 1:
				printf ("yi");
				break;
			case 2:
				printf ("er");
				break;
			case 3:
				printf ("san");
				break;
			case 4:
				printf ("si");
				break;
			case 5:
				printf ("wu");
				break;
			case 6:
				printf ("liu");
				break;
			case 7:
				printf ("qi");
				break;
			case 8:
				printf ("ba");
				break;
			case 9:
				printf ("jiu");
				break;
			default :
				printf ("ling");
		}
		if (c>0){
			printf (" ");
		}
	}
	printf ("\n");
	return 0;
}

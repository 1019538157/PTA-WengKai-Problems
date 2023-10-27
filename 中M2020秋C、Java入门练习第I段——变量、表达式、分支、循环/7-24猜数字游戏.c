#include <stdio.h>
int main (){
	int a,b,c=1,i=0,N=1,d=1;
	scanf ("%d %d",&a,&b);
	int way[100];
	scanf ("%d",&c);
	while (c>0){
		i++;
		way[i]=c;
		scanf ("%d",&c);
	}
	d=i;
	if (i==0)printf ("Game Over");
	for (i=1;i<=d;i++){
		if (way[i]>a){
			printf ("Too big\n");
		}else if (way[i]<a){
			printf ("Too small\n");
		}else {
			if (i==1){
				printf ("Bingo!");
				break;
			}else if (i<=3){
				printf ("Lucky You!");
				break;
			}else {
				printf ("Good Guess!");
				break;
			}
		}
		if (i==b&&way[i]!=a){
			printf ("Game Over");
			break;
		}
		if (i==d&&i<b){
			printf ("Game Over");
			break;
		}
	}
	return 0;
}

#include <stdio.h>
int main (){
	long i,a=0,b=0,c=0,d=0;
	for (i=1;;i++){
		a=i%5;b=i%6;
		c=i%7;d=i%11;
		if (a==1&&b==5&&c==4&&d==10){
			printf ("%d",i);
			break;
		}
	} 
	return 0;
}

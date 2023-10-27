#include <stdio.h>
int main (){
	char c;
	double a,b;
	double result;
	scanf ("%lf %lf %c",&a,&b,&c);
	if (b==90){
		result=a*6.95;
	}else if (b==93){
		result=a*7.44;
	}else if (b==97){
		result=a*7.93;
	}
	if (c=='m'){
		result*=0.95;
	}else if (c=='e'){
		result*=0.97;
	}
	printf ("%.2lf",result);
	return 0;
}

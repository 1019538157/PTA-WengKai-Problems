#include <stdio.h>
int main (){
	int gongzi;
	double result;
	scanf ("%d",&gongzi);
	if (gongzi<=1600){
		result=0;
	}else if (gongzi>1600&&gongzi<=2500){
		result=0.05*(gongzi-1600);
	}else if (gongzi>2500&&gongzi<=3500){
		result=0.1*(gongzi-1600);
	}else if (gongzi>3500&&gongzi<=4500){
		result=0.15*(gongzi-1600);
	}else{
		result=0.2*(gongzi-1600);
	}
	printf ("%.2lf",result);
	return 0;
}

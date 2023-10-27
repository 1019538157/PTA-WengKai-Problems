#include <stdio.h>
int main (){
	int year,time,normal;
	scanf ("%d %d",&year,&time);
	if (year<5){
		normal=30;
	}else {
		normal=50;
	}
	double result=0.0;
	if (time<=40){
		result=normal*time;
	}else {
		result=normal*40+(time-40)*1.5*normal;
	}
	printf ("%.2lf",result);
	return 0;
}

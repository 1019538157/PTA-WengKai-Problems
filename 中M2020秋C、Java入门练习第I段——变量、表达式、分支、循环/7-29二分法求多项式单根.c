#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	int a3,a2,a1,a0;
	double y1,y2,y3,a,b,x,c,d;
	scanf ("%d %d %d %d",&a3,&a2,&a1,&a0);
	scanf ("%lf %lf",&a,&b);
	y1=a3*pow(a,3)+a2*pow(a,2)+a1*a+a0;
	y2=a3*pow(b,3)+a2*pow(b,2)+a1*b+a0;
	d=abs(a-b);
	while (d>=0.01){
		if (y1*y2<=0){
			x=(a+b)/2;
			y3=a3*pow(x,3)+a2*pow(x,2)+a1*x+a0;
			if (y3==0){
				printf ("%.2lf",x);
				break;
			}else if(y1==0){
				printf ("%.2lf",a);
				break;
			}else if(y2==0){
				printf ("%.2lf",b);
				break;
			}else {
				if (y3*y1>0){
					a=x;
					continue;
				}else {
					b=x;
					continue;
				}
			}
		}else {
			break;
		}
		y1=a3*pow(a,3)+a2*pow(a,2)+a1*a+a0;
		y2=a3*pow(b,3)+a2*pow(b,2)+a1*b+a0;
		d=abs(a-b);
	}
	if (d<0.01){
		printf ("%.2lf",(a+b)/2);
	}
	return 0;
}

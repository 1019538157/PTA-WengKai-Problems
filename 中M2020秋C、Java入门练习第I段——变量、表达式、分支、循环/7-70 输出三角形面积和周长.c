#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c,d,e,f;	//三角形顶点坐标
	double A,B,C,p;	//三边 
	double zhouc,mianj;
	scanf ("%lf %lf %lf",&A,&B,&C);
	if (A+B>C&&A+C>B&&B+C>A){
		zhouc=A+B+C;
		p=zhouc/2;
		mianj=sqrt(p*(p-A)*(p-B)*(p-C));
		printf ("area = %.2lf; perimeter = %.2lf",mianj,zhouc);
	} else {
		printf ("These sides do not correspond to a valid triangle");
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c,d,e,f;	//三角形顶点坐标
	double A,B,C,p;	//三边 
	double zhouc,mianj;
	scanf ("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	A=sqrt(pow(a-c,2)+pow(b-d,2));
	B=sqrt(pow(a-e,2)+pow(b-f,2));
	C=sqrt(pow(c-e,2)+pow(d-f,2));	//算三边长和
	if (A+B>C&&A+C>B&&B+C>A){
		zhouc=A+B+C;
		p=zhouc/2;
		mianj=sqrt(p*(p-A)*(p-B)*(p-C));
		printf ("L = %.2lf, A = %.2lf",zhouc,mianj);
	} else {
		printf ("Impossible");
	}
	return 0;
}

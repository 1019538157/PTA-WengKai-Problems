#include <stdio.h>
#include <math.h>
int main (){
	double a,b,c,d,e,f;	//�����ζ�������
	double A,B,C,p;	//���� 
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

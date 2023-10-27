#include <stdio.h>
int main (){
	int year,month,day,a=0;
	int x[13];
	x[1]=31,x[2]=28,x[3]=31,x[4]=30,x[5]=31,x[6]=30,x[7]=31,x[8]=31,x[9]=30,x[10]=31,x[11]=30,x[12]=31;
	scanf ("%d/%d/%d",&year,&month,&day);
	if (year%4==0&&year%100!=0||year%400==0){
		x[2]=29;
		for (int i=1;i<month;i++){
			a+=x[i];
		}
		a+=day;
	}else{
		for (int i=1;i<month;i++){
			a+=x[i];
		}
		a+=day;
	}
	printf ("%d",a);
	return 0;
} 

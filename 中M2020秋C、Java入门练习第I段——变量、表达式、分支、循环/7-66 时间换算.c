#include <stdio.h>
int main (){
	int hour,min,sec;
	scanf ("%d:%d:%d",&hour,&min,&sec);
	int n;
	scanf ("%d",&n);
	int sum=hour*3600+min*60+sec+n;
	int hor=sum/3600;sum%=3600;
	int min2=sum/60;
	int sec2=sum%60;
	if (hor<24){
		printf ("%02d:%02d:%02d",hor,min2,sec2);
	}else {
		printf ("00:%02d:%02d",min2,sec2);
	}
	return 0;
}

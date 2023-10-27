#include <stdio.h>
int main (){
	int hh,mm;
	scanf ("%d:%d",&hh,&mm);
	if (0<=hh&&hh<=12){
		printf ("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}else if (hh==12&&mm!=0){
		printf ("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}else {
		for (int i=1;i<=hh-12;i++){
			printf ("Dang");
		} 
		if (mm!=0){
			printf ("Dang");
		}
	}
	return 0;
}

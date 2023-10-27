#include <stdio.h>
int main (){
	int a;
	scanf ("%d",&a);
	int d=a+3;
	int i=1;
	for (int b=a;b<=d;b++){
		for (int c=a;c<=d;c++){
			for (int e=a;e<=d;e++){
				int sum=e+c*10+b*100;
				if (e!=c&&c!=b&&e!=b){
					if (i<6){
						printf ("%d ",sum);
						i++;
					}else {
						printf ("%d\n",sum);
						i=1;
					}
				}
			}
		}
	} 
	return 0;
}

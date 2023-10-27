#include <stdio.h>
int main (){
	int a,b,c;
	int d,e,f;
	scanf ("%d %d %d",&a,&b,&c);
	if (a>c){
		d=a;f=c;
		if (b>c&&b<a){
			e=b;
		}else if(b<c){
			e=c;f=b;
		}else if (b>a){
			d=b;e=a;
		}
	}else {
		d=c;f=a;
		if (b<c&&b>a){
			e=b;
		}else if(b<a){
			e=a;f=b;
		}else if (b>c){
			d=b;e=c;
		}
	}
	printf ("%d->%d->%d",f,e,d);
	return 0;
}

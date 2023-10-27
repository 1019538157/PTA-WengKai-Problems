#include <stdio.h>
int main (){
	int x;
	scanf ("%d",&x);
	int i;
	if (x==0){
		printf ("32");
		goto out;
	}else if (x<0){
		printf ("0");
		goto out;
	}
	for (i=1;;i++){
		x/=2;
		if (x==0){
			break;
		}
	}
	printf ("%d",32-i);
	out:
	return 0;
}

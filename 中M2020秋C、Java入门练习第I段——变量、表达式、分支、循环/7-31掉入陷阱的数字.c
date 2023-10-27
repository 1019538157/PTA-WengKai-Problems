#include <stdio.h>
int main (){
	int x1,x2,a=0,b=0,c=0,d=0;
	scanf ("%d",&x1);
	d=x1;
	for(int i=0;i<100;i++){
		while(d>0){
			b=d%10;
			d/=10;
			c+=b;
		}
		x2=x1;
		x1=c*3+1;
		d=x1;
		if(x2==x1){
			printf ("%d:%d\n",a+1,x1);
			goto out;
		}
		a++;
		printf ("%d:%d\n",a,x1);
		b=0;
		c=0;
	}
	out:
	return 0; 
}

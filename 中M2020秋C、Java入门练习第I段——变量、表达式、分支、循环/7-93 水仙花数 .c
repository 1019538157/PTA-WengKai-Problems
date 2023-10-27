#include <stdio.h>
#include <math.h>
int main (){
	int n,sum=0;
	int a=0,b=0;
	scanf ("%d",&n);	//输入位数 
	int i=pow(10,n-1);
	int out=pow(10,n);
	for(i;i<out;i++){	//枚举范围内所有整数 
		b=i;
		for(int t=1;t<=n;t++){
			a=b%10;
			b/=10;		//计算每位数 
			sum+=pow(a,n);
		}
		if (sum==i){
			sum=0;
			printf ("%d\n",i);	//判断是否为水仙花数 
		} else {
			sum=0;
		}
	}
	return 0;
}

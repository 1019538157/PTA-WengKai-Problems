#include <stdio.h>
#include <math.h>
int main (){
	int n,sum=0;
	int a=0,b=0;
	scanf ("%d",&n);	//����λ�� 
	int i=pow(10,n-1);
	int out=pow(10,n);
	for(i;i<out;i++){	//ö�ٷ�Χ���������� 
		b=i;
		for(int t=1;t<=n;t++){
			a=b%10;
			b/=10;		//����ÿλ�� 
			sum+=pow(a,n);
		}
		if (sum==i){
			sum=0;
			printf ("%d\n",i);	//�ж��Ƿ�Ϊˮ�ɻ��� 
		} else {
			sum=0;
		}
	}
	return 0;
}

#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	char ch[n];
	double high[n];
	int i=0;
	for (i=0;i<n;i++){
		scanf ("%s %lf\n",&ch[i],&high[i]);
	}
	for (i=0;i<n;i++){
		if (ch[i]=='M'){
			printf ("%.2lf\n",high[i]/1.09);
		}else if (ch[i]=='F'){
			printf ("%.2lf\n",high[i]*1.09);
		}
	}
	return 0;
}

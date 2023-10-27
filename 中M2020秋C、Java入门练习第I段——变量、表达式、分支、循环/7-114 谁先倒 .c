#include <stdio.h>
int main (){
	int jj,yj;
	scanf ("%d %d",&jj,&yj);
	int jhe=0,yhe=0;
	int n;
	scanf ("%d",&n);
	int jha,jhu,yha,yhu;
	int result=0;
	int i;
	for ( i=0;i<n;i++){
		scanf ("%d %d %d %d",&jha,&jhu,&yha,&yhu);
		int sum=jha+yha;
		if (sum==jhu&&sum!=yhu){
			jhe++;
		}else if (sum==yhu&&sum!=jhu){
			yhe++;
		}
		if (jhe>jj){
			result=1;
			break;
		}else if (yhe>yj){
			result=0;
			break;
		}	
	}
	if(result==1){
		printf ("A\n");
		printf ("%d",yhe);
	}else if(result==0){
		printf ("B\n");
		printf ("%d",jhe);
	}
	return 0;
}

#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int zheng[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&zheng[i]);
	}
	int fan[n];
	for (int i=0;i<n;i++){
		fan[n-1-i]=zheng[i];
	}
	for (int i=0;i<n;i++){
		if (i!=n-1){
			printf ("%d ",fan[i]);
		}else {
			printf ("%d",fan[i]);
		}
		
	}
	return 0;
}

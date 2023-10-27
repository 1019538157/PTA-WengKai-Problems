#include <stdio.h>

int num[100000000];
int main (){
	int n;
	scanf ("%d",&n);
	int mx=-99999999,maxid=0;
	for (int i=0;i<n;i++){
		scanf ("%d",&num[i]);
		if (num[i]>mx){
			mx=num[i];
			maxid=i;
		}
	}
	printf ("%d %d",mx,maxid);
	return 0;
}

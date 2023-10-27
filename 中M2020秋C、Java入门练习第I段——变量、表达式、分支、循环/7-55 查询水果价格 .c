#include <stdio.h>
int main (){
	printf ("[1] apple\n");
	printf ("[2] pear\n");
	printf ("[3] orange\n");
	printf ("[4] grape\n");
	printf ("[0] exit\n");
	int num[4]={1,1,1,1,};
	int i=0;
	char ch;
	int t;
	while (num[i]!=0&&i!=5){
		scanf("%d",&num[i]);
		if (num[i]==0||i==5)break;
		i++;
	} 
	t=i;i=0;
	for (i;i<=t-1;i++){
		switch (num[i]){
			case 1:{
				printf ("price = 3.00\n");
				break;
			}
			case 2:{
				printf ("price = 2.50\n");
				break;
			}
			case 3:{
				printf ("price = 4.10\n");
				break;
			}
			case 4:{
				printf ("price = 10.20\n");
				break;
			}
			default :{
				printf ("price = 0.00\n");
				break;
			}
		}
	}
	return 0;
}

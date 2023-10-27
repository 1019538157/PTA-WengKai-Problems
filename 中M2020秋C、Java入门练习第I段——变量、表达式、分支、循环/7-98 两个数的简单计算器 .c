#include <stdio.h>
int main (){
	int a,b;
	char ch;
	int res;
	scanf ("%d %c %d",&a,&ch,&b);
	if (ch=='+'){
		res=a+b;
	}else if (ch=='-'){
		res=a-b;
	}else if (ch=='*'){
		res=a*b;
	}else if (ch=='/'){
		res=a/b;
	}else if (ch=='%'){
		res=a%b;
	}else {
		printf ("ERROR");
		goto out;
	}
	printf ("%d",res);
	out:
	return 0;
}

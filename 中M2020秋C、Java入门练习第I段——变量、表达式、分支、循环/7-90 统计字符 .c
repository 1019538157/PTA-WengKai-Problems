#include <stdio.h>
int main (){
	char n;
	int letter=0,blank=0,digit=0,other=0;
	for (int i=0;i<10;i++){
		scanf ("%c",&n);
		if (n>='a'&&n<='z'||n>='A'&&n<='Z'){
			letter++;
		}else if (n==' '||n=='\n'){
			blank++;
		}else if (n>='0'&&n<='9'){
			digit++;
		}else {
			other++;
		}
	}
	printf ("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}

#include <stdio.h>
 
int main(void) {
	int m, n, i;
	double sum;
	
	scanf("%d %d", &m, &n);
	sum = 0;
	for (i = m; i <= n; i++)
		sum += i * i + 1.0 / i;    //平方 与 倒数。
	printf("sum = %f", sum); 
	
	return 0;
}

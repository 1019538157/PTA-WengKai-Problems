#include <stdio.h>
#include <math.h>
int main() {
	int H, W;
	int N;
	double std;
	scanf("%d", &N);
	while(N--) {
		scanf("%d%d", &H, &W);
		std = 0.9*(H-100)*2;
		if(fabs(std-W)<(0.1*std)) {
			printf("You are wan mei!\n");
		} else if(W>std) {
			printf("You are tai pang le!\n");
		} else {
			printf("You are tai shou le!\n");
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
unsigned int nInput = 0, nSum = 0, nPow = 0;

int main(void) {
	printf("nhap n:\r\n");
	scanf_s("%d",&nInput);
	printf("n: %d\r\n",nInput);
	for (int i = 0; i <= nInput; i++) {
		if (i % 2 != 0) {
			nSum += i;
		}
	}
	nPow = pow(nSum, 2);
	return 1;
}

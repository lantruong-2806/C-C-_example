#include<stdio.h>

int nInput = 0;
int main(void) {
	char a;
	printf("nhap n = ");
	scanf_s("%d", &nInput);
	if (nInput % 2 == 1) {
		printf("%d la so le", nInput);
		a = 0;
	}
	else {
		printf("%d la so chan", nInput);
		a = 1;
	}
	return a;
}
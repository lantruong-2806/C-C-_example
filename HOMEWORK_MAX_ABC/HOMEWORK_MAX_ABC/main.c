#include<stdio.h>

int a[3];
int main(void) {
	printf("nhap a = \r\n");
	scanf_s("%d", &a[0]);
	printf("nhap b = \r\n");
	scanf_s("%d", &a[1]);
	printf("nhap c = \r\n");
	scanf_s("%d", &a[2]);
	int max = 0;
	for (int i = 0; i < 2; i++) {
		if (a[i] > a[i + 1]) {
			max = a[i];
		}
		else
			max = a[i + 1];
	}
	return 1;
}
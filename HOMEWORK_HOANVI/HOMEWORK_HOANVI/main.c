#include<stdio.h>
void hoanvi(int *x, int *y);
int main() {
	int a, b;
	a = 1;
	b = 2;
	hoanvi(&a, &b);// truyen vao dia chi cua a va b
	printf("so a %x\r\n", a);
	printf("so b %x\r\n", b);
}
void hoanvi(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


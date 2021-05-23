#include<stdio.h>
int aIn, bIn;
int USCLN(int a, int b);
int BSCNN(int a, int b);
int SHH(int n);
int SCP(int n);
int main(void) {
	printf("Nhap a = ");
	scanf_s("%d", &aIn);
	printf("Nhap b = ");
	scanf_s("%d", &bIn);
	printf("Uoc so chung lon nhat: %d\r\n", USCLN(aIn, bIn));
	printf("Boi so chung nho nhat: %d\r\n", BSCNN(aIn, bIn));
	if (SHH(aIn) == 1) {
		printf("%d la so hoan hao\r\n", aIn);
	}
	else printf("%d khong phai la so hoan hao\r\n", aIn);
	if (SCP(aIn) == 1) {
		printf("%d la so chinh phuong\r\n", aIn);
	}
	else printf("%d khong phai la so chinh phuong\r\n", aIn);
	return 1;
}
int USCLN(int a, int b) {
	if(b == 0){
		return a;
	}
	return USCLN(b, a % b);
}
int BSCNN(int a, int b){
	return (a*b) / USCLN(a, b);
}
int SHH(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		return 1;
	}
	return 0;
}
int SCP(int n) {
	char kq = 0;
	for (int i = 1; i < n / 2; i++) {
		if (n / i == i) {
			kq = 1; 
			break;
		}
		else kq = 0;
	}
	return kq;
}
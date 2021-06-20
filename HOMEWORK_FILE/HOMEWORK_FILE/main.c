#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	FILE * px = fopen("hello.txt", "r");
	int x = 0;
	char x2 = 0;
	do {
		x = fgetc(px);
		printf("%c", x);
	} while (x != EOF);
	fclose(px);
	
	FILE * px2 = fopen("hello1.txt", "w");
	char *string = "xin chao";
    x2 = fputc(string, "hello1.txt");

}

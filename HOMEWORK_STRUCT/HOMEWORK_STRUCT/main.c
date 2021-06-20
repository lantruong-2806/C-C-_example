#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

typedef enum  {
	Best = 0,
	Good,
	Normal,
	Bad,
}rating;
typedef struct  {
	char name[50];
	float Toan;
	float Van;
	rating xeploai;
}Students;

Students Student[11];
void main(void) {
	FILE *px = fopen("LopA1.csv", "r");

	char x = 0;
	do {
		int i = 0;
		x = fgetc(px);
		printf("%c", x);
		Student->name[1] += x;
		if (x ==',') {
			Student->Toan = x;
		}
		if (x == '/n') {
			i++;
		}
	} while (x != EOF);
	fclose(px);
}
	
		
		
		/*for (int i = 1; i <= 5; i++) {
		printf("student name %d: \n", i);
		scanf_s("%s", &Student[i].name, sizeof(&Student[i].name));
		gets(Student[i].name);
		printf("\r\n");
		printf("student ID: \n");
		scanf_s("%d", &Student[i].ID);
		printf("\r\n");
		printf("student class: \n");
		scanf_s("%d", &Student[i].class);
		printf("\r\n");
		printf("student score (0-10): \n");
		scanf_s("%f", &Student[i].Score);
	}
	for (int i = 1; i <= 5; i++) {
		
		printf("name: %s | ID: %d | class: %d | Score: %.2f \r\n", Student[i].name,
			Student[i].ID,
			Student[i].class,
			Student[i].Score
		);
	}
}
*/

#include<stdio.h>
#include<math.h>
void matrix_calc(void);// ham tinh tong 2 matran
void matrix_sub(void);// ham tinh hieu hai matran
void maxtrix_mul(void); // ham tinh tich hai matran
double S_calc(void); // ham tinh tich phan dien tich theo y = f(x) voi f(x) = x^2
int matrix_a[2][2] = { 1, 2, 
					   3, 4},	
    matrix_b[2][2] = { 5, 6,
					   7, 8},
    matrix_c[2][2];
int   A[4][2] = { 1, 2,
				  2, 3, 
	              1, 3,
	              2, 1,},

	  B[2][3] = { 3, 2, 3,
			      1, 3, 2 },

	  C[4][3];
// ma tran A[i][k] * B[k][j] = C[i][j] <===>A[4][3] * B[2][3] = C[4][3] 
// i = 4; j = 3; k =2;
double S_kq;
void main() {
	//matrix_calc();
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		printf("%d\n",matrix_c[i][j]);
	//	}
	//}
	//matrix_sub();
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		printf("%d\n", matrix_c[i][j]);
	//	}
	//}
	//S_kq = S_calc();
	//printf("dien tich = %f m^2\n", S_kq);
	maxtrix_mul();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}

}
void matrix_calc(void) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
		}
		
	}
}
void matrix_sub(void) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			matrix_c[i][j] = matrix_a[i][j] - matrix_b[i][j];
		}

	}
}
double S_calc(void) {
	int x1 = 0, x2 =100;// toa do x1 , x2 
	double step_count, S, S_sum = 0, a, b, h = 0;

	step_count = (double)(x2 - x1) / 1000;// buoc 1000
	for (double i = 0; i < 1000; i ++) {
		a = pow(((i*step_count) + x1), 2); // y =f(x) = x^2
		b = pow((((i + 1) * step_count) + x1), 2);  // y =f(x + 1) = x^2
		h = ((i + 1)* step_count + x1) - (i * step_count + x1);// chieu cao H = X(i+1) - X(i)
		S = ((a + b)  * h) / 2;
		S_sum += S;
	}
	return S_sum;
}
void maxtrix_mul(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
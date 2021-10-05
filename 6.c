#include <stdio.h> 
#include <math.h>

int main() { 

	printf("Task 1\n");
	float A, B, C, D;
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter B: ");
	scanf_s("%f", &B);
	C = A;
	A = B;
	B = C;
	printf("A = %f\n", A);
	printf("B = %f\n", B);

	printf("\nTask 2\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter B: ");
	scanf_s("%f", &B);
	printf("Enter C: ");
	scanf_s("%f", &C);
	D = A;
	A = C;
	C = B;
	B = D;
	printf("A = %f\n", A);
	printf("B = %f\n", B);
	printf("C = %f\n", C);
	
	printf("\nTask 3\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter B: ");
	scanf_s("%f", &B);
	printf("Enter C: ");
	scanf_s("%f", &C);
	D = A;
	A = B;
	B = C;
	C = D;
	printf("A = %f\n", A);
	printf("B = %f\n", B);
	printf("C = %f\n", C);

	printf("\nTask 4\n");
	float x, y;
	printf("Enter x: ");
	scanf_s("%f", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("y = %f\n", y);

	printf("\nTask 5\n");
	printf("Enter x: ");
	scanf_s("%f", &x);
	y = 4*(pow((x-3),6))-7*(pow((x-3),3))+2;
	printf("y = %f\n", y);

	printf("\nTask 6\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	B = A * A;
	B = B * B;
	printf("A^8= %f", B * B);

	printf("\nTask 7\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	B = A * A;
	C = B * B * A;
	C = C * C * C;
	printf("A^15= %f", C);

	return 0;  
} 

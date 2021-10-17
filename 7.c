#include <stdio.h> 

int main() { 
	float A, B, C, D, X, Y, V1, V2, T, S, C1, C2, A1, A2, B1, B2;

	printf("Task 1\n");
	printf("Enter angle degree: ");
	scanf_s("%f", &A);
	B = A / 180;
	printf("a = %.2fpi\n", B);

	printf("\nTask 2\n");
	printf("Enter angle in radians without PI: ");
	scanf_s("%f", &A);
	B = 180*A;
	printf("a = %.2f degrees\n", B);
	
	printf("\nTask 3\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter X: ");
	scanf_s("%f", &X);
	printf("Enter Y: ");
	scanf_s("%f", &Y);
	B = A / X;
	C = Y * B;
	printf("1kg costs %.2f rubles\n", B);
	printf("Ykg costs %.2f rubles\n", C);

	printf("\nTask 4\n");
	printf("Enter V1: ");
	scanf_s("%f", &V1);
	printf("Enter V2: ");
	scanf_s("%f", &V2);
	printf("Enter S: ");
	scanf_s("%f", &S);
	printf("Enter T: ");
	scanf_s("%f", &T);
	A=S+T*(V1+V2);
	printf("Distance is %.2f km\n", A);

	printf("\nTask 5\n");
	printf("Enter A not zero: ");
	scanf_s("%f", &A);
	printf("Enter B: ");
	scanf_s("%f", &B);
	X = (-1) * (B / A);
	printf("x is %.2f\n", X);

	printf("\nTask 6\n");
	printf("Enter A1: ");
	scanf_s("%f", &A1);
	printf("Enter A2: ");
	scanf_s("%f", &A2);
	printf("Enter B1: ");
	scanf_s("%f", &B1);
	printf("Enter B2: ");
	scanf_s("%f", &B2);
	printf("Enter C1: ");
	scanf_s("%f", &C1);
	printf("Enter C2: ");
	scanf_s("%f", &C2);
	Y = (C2 - A2 * C1 / A1) / (B2 - A2 * B1 / A1);
	X = (C1 - B1 * Y) / A1;
	printf("x = %.2f\n", X);
	printf("y = %.2f\n", Y);

	return 0;  
} 

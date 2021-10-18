#include <stdio.h> 

int main() { 
	int X, Y, A, B, C, D;

	printf("Task 1\n");
	printf("Enter file size in bytes: ");
	scanf_s("%i", &X);
	Y = X/1024;
	printf("It's equal %i Kbytes", Y);

	printf("\nTask 2\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B(<A): ");
	scanf_s("%i", &B);
	C = A / B;
	printf("Answer is %i\n", C);
	
	printf("\nTask 3\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B(<A): ");
	scanf_s("%i", &B);
	C = A % B;
	printf("Answer is %i\n", C);

	printf("\nTask 4\n");
	printf("Enter a two-digit number: ");
	scanf_s("%i", &A);
	B = A % 10;
	C = A / 10;
	D = B * 10 + C;
	printf("Answer is %i\n", D);

	printf("\nTask 5\n");
	printf("Enter a three-digit number: ");
	scanf_s("%i", &A);
	B = A % 100;
	C = A / 100;
	D = B * 10 + C;
	printf("Answer is %i\n", D);

	return 0;  
} 

#include <stdio.h> 

int main() { 
	int N, K, A, B, C, D;

	printf("Task 1\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	A = N % 60;
	printf("Answer is %i seconds:)", A);

	printf("\nTask 2\n");
	printf("Enter K: ");
	scanf_s("%i", &K);
	A = 1;
	while (K != 1) {
		if (A < 6) {
			A++;
		}
		else {
			A = 0;
		} K = K - 1;
	}
	printf("Answer is %i\n", A);
	
	printf("\nTask 3\n");
	printf("Enter K: ");
	scanf_s("%i", &K);
	printf("Enter N: ");
	scanf_s("%i", &N);
	A = N;
	while (K != 1) {
		if (A < 7) {
			A++;
		}
		else {
			A = 1;
		} K = K - 1;
	}
	printf("Answer is %i\n", A);

	printf("\nTask 4\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	printf("Enter C: ");
	scanf_s("%i", &C);
	D = (A / C) * (B / C);
	K = (A * B) - (D * C * C);
	printf("Kolichestvo ravno %i\n", D);
	printf("Nezanyataya poshad' ravna %i\n", K);

	printf("\nTask 5\n");
	printf("Enter a year: ");
	scanf_s("%i", &N);
	K = N / 100 + 1;
	printf("It is %ith centery", K);

	return 0;  
} 

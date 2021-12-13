#include <stdio.h> 
#include <math.h>

int main(void) {
	float R, A, i, B;
	int N;

	printf("Task 1\n");
	printf("Enter 1kg of candy price: ");
	scanf_s("%f", &A);
	for (i = 0.1; i < 1.1; i+=0.1) {
		R = A * i;
		printf("price of %.1fkg of candy: %.1f\n", i, R);
	}
	
	printf("\nTask 2\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	R = 1;
	A = 1;
	for (i = 0; i < N; i++) {
		R += 0.1;
		A = A * R;
	}
	printf("%f\n", A);


	printf("\nTask 3\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	R = 0;
	for (i = 1; i <= (2 * N - 1); i += 2) {
		R += i;
		printf("%.0f\n", R);
	}

	printf("\nTask 4\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter N: ");
	scanf_s("%i", &N);
	R = 0;
	for (i = 0; i <= N; i++) {
		R += pow(A, i);
	}
	printf("%.0f\n", R);

	printf("\nTask 5\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter N: ");
	scanf_s("%i", &N);
	R = 1;
	B = 1;
	for (i = 1; i <= N; i++) {
		B = B * (-1 * A);
		R += B;
	}
	printf("%.0f\n", R);

	return 0;
}

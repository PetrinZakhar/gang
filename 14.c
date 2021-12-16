#include <stdio.h> 
#include <math.h>

int main(void) {
	int A, B, N, K, i, x, y;
	float P, S;

	printf("Task 1\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B (B>A): ");
	scanf_s("%i", &B);
	for (x = A; x <= B; x++) {
		for (i = 1; i <= x; i++) {
			printf("%i\n", x);
		}
	}
	printf("\nTask 2\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B (B<A): ");
	scanf_s("%i", &B);
	x = A;
	while (x >= 0) {
		x -= B;
	}
	printf("%i\n", x + B);

	printf("\nTask 3\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	x = 0;
	K = 0;
	while (x < N) {
		K++;
		x += K;
	}
	printf("K is %i and summa is %i\n", K, x);

	printf("\nTask 4\n");
	printf("Enter P: ");
	scanf_s("%f", &P);
	x = 0;
	S = 1000;
	while (S <= 1100) {
		x++;
		S += S * P / 100;
	}
	printf("K is %i and S is %.2f\n", x, S);

	printf("\nTask 5\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	while ((A != 0) && (B != 0)) {
		if (A > B) {
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	printf("%i\n", A + B);

	printf("\nTask 6\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	i = 0;
	x = 1;
	y = 1;
	K = 3;
	while (x < N) {
		K++;
		i = x + y;
		y = x;
		x = i;
	}
	printf("Esli schitat s nulya K: %i\n", K);

	return 0;
}

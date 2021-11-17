#include <stdio.h> 

int main() {
	int A, B, C, D, E, a, b, c;

	printf("Task 1\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	if (A > 2 && B <= 3) {
		printf("True (A > 2 and B ≤ 3)");
	}
	else {
		printf("False");
	}

	printf("\nTask 2\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	printf("Enter C: ");
	scanf_s("%i", &C);
	if (A < B && B < C) {
		printf("True (A < B < C)");
	}
	else {
		printf("False");
	}

	printf("\nTask 3\n");
	printf("Enter number: ");
	scanf_s("%i", &A);
	B = A % 10;
	if (A > 9 && B % 2 == 0 && A < 100) {
		printf("True (number is 2-digit and even)");
	}
	else {
		printf("False (number is not 2-digit or odd)");
	}

	printf("\nTask 4\n");
	printf("Enter number: ");
	scanf_s("%i", &A);
	B = A % 10;
	C = (A / 10) % 10;
	D = A / 100;
	if ((B>C && C>D)||(B<C && C<D)) {
		printf("True (digits form increasing or decreasing sequence)");
	}
	else {
		printf("False (numbers do not form an ascending or descending sequence)");
	}

	printf("\nTask 5\n");
	printf("Enter number: ");
	scanf_s("%i", &A);
	B = A % 10;
	C = (A / 10) % 10;
	D = (A / 100) % 10;
	E = A / 1000;
	if (B==E && C==D) {
		printf("True (This number is a palindrome)");
	}
	else {
		printf("False (This number is not a palindrome)");
	}

	printf("\nTask 6\n");
	printf("Enter a: ");
	scanf_s("%i", &a);
	printf("Enter b: ");
	scanf_s("%i", &b);
	printf("Enter c: ");
	scanf_s("%i", &c);
	if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b)) {
		printf("True (The triangle is rectangular)");
	}
	else {
		printf("False (The triangle is not rectangular)");
	}

	printf("\nTask 7\n");
	printf("Enter a: ");
	scanf_s("%i", &a);
	printf("Enter b: ");
	scanf_s("%i", &b);
	printf("Enter c: ");
	scanf_s("%i", &c);
	if ((a+b>c) && (b+c>a) && (a+c>b)) {
		printf("True (The triangle exists)");
	}
	else {
		printf("False (The triangle does not exists)");
	}

	return 0;
}

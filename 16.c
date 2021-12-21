#include <stdio.h> 
#include <math.h>

int main(void) {
	int N, i, j = 1, A, D, B;
	int arr[100];

	printf("Task 1\n");
	printf("Enter N>0: ");
	scanf_s("%i", &N);
	for (i = 0; i < N; i++, j += 2) {
		arr[i] = j;
	}
	printf("arr[]:");
	for (i = 0; i < N; i++) {
		printf(" %i", arr[i]);
	}
	
	printf("\n\nTask 2\n");
	printf("Enter N>1: ");
	scanf_s("%i", &N);
	printf("Enter A: ");
	scanf_s("%i", &arr[0]);
	printf("Enter D: ");
	scanf_s("%i", &D);
	j = 1;
	for (i = 1; i < N; i++) {
		arr[i] = arr[0] * pow(D, j);
		j++;
	}
	printf("arr[]:");
	for (i = 0; i < N; i++) {
		printf(" %i", arr[i]);
	}

	printf("\n\nTask 3\n");
	printf("Enter N>2: ");
	scanf_s("%i", &N);
	printf("Enter A: ");
	scanf_s("%i", &arr[0]);
	printf("Enter B: ");
	scanf_s("%i", &arr[1]);
	for (i = 2; i < N; i++) {
		arr[i] = 0;
		j = 0;
		for (j = 0; j < i; j++) {
			arr[i] += arr[j];
		}
	}
	printf("arr[]:");
	for (i = 0; i < N; i++) {
		printf(" %i", arr[i]);
	}

	printf("\n\nTask 4\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	for (i = 0; i < N; i++) {
		printf("Enter A[%i]: ", i + 1);
		scanf_s("%i", &arr[i]);
	}
	printf("A[]:");
	for (i = 0; i < N / 2; i++) {
		printf(" %i", arr[i]);
		printf(" %i", arr[N - i - 1]);
	}
	if (N % 2 != 0) {
		printf(" %i", arr[N / 2]);
	}

	printf("\n\nTask 5\n");
	printf("Enter N: ");
	scanf_s("%i", &N);
	for (i = 0; i < N; i++) {
		printf("Enter A[%i]: ", i + 1);
		scanf_s("%i", &arr[i]);
	}
	printf("A[]:");
	for (i = 0; i < N; i += 2) {
		printf(" %i", arr[i]);
	}
	for (i = N - (N % 2) - 1; i >= 1; i -= 2) {
		printf(" %i", arr[i]);
	}
	return 0;
}

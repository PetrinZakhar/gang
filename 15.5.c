#include <stdio.h> 

float fact2(int N) {
	int f = 1;
	for (; N > 0; N -= 2) f *= N;
	return f;
}
int main(void) {
	int N;
	printf("Enter N: ");
	scanf_s("%i", &N);
	printf("Fact2 is %f\n", fact2(N));
}

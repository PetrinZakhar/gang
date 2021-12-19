#include <stdio.h> 
void PowerA3(float A, float* B) {
	*B = A * A * A;
}
int main(void) {
	int i;
	for (i = 1; i <= 5; i++) {
		float A;
		printf("Enter A: ");
		scanf_s("%f", &A);
		float B;
		PowerA3(A, &B);
		printf("B is %f\n", B);
	}
	return 0;
}

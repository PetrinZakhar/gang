#include <stdio.h> 

float rings(float r1, float r2) {
	return (r1 * r1 - r2 * r2);
}
int main(void) {
	int i;
	for (i = 1; i <= 3; i++) {
		float r1, r2, res;
		printf("Enter R1: ");
		scanf_s("%f", &r1);
		printf("Enter R2: ");
		scanf_s("%f", &r2);
		res = rings(r1, r2);
		printf("Result is %fpi\n", res);
	}
}

#include <stdio.h> 

int sign(float x) {
	if (x < 0) { return -1; }
	if (x == 0) { return 0; }
	if (x > 0) { return 1; }
}
int main(void) {
	float a, b;
	int c;
	printf("Enter A: ");
	scanf_s("%f", &a);
	printf("Enter B: ");
	scanf_s("%f", &b);
	c = sign(a) + sign(b);
	printf("Sign(A)+Sign(B) is %i\n", c);
	return 0;
}

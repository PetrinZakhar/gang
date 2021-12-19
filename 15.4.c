#include <stdio.h> 

int quarter(float x, float y) {
	if (x > 0 && y > 0) { return 1; }
	if (x > 0 && y < 0) { return 4; }
	if (x < 0 && y > 0) { return 2; }
	else { return 3; }
}
int main(void) {
	int i;
	for (i = 1; i <= 3; i++) {
		float x, y;
		printf("Enter x: ");
		scanf_s("%f", &x);
		printf("Enter y: ");
		scanf_s("%f", &y);
		printf("Quarter %i\n", quarter(x,y));
	}
}

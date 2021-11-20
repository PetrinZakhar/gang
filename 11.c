#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main() {
	int A, B, C, D, E, Ax, Ay, Bx, By, Cx, Cy;

	printf("Task 1\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	if (A != B) {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	else {
		A = 0;
		B = 0;
	} printf("A = %i\n", A); printf("B = %i\n", B);

	printf("\nTask 2\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	printf("Enter C: ");
	scanf_s("%i", &C);
	if ((A > B) && (C > B)) {
		printf("summa of two max numbers = %i\n", A + C);
	}
	else {
		if ((A > C) && (B > C)) {
			printf("summa of two max numbers = %i\n", A + B);
		}
		else {
			printf("summa of two max numbers = %i\n", B + C);
		}
	}



	printf("\nTask 3\n");
	printf("Enter Ax: ");
	scanf_s("%i", &Ax);
	printf("Enter Ay: ");
	scanf_s("%i", &Ay);
	printf("Enter Bx: ");
	scanf_s("%i", &Bx);
	printf("Enter By: ");
	scanf_s("%i", &By);
	printf("Enter Cx: ");
	scanf_s("%i", &Cx);
	printf("Enter Cy: ");
	scanf_s("%i", &Cy);
	D = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
	E = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
	if (D != E) {
		if (D < E) {
			printf("B blizhe k A. primernoe rasstoyanie ot A do B = %i\n", D);
		}
		else {
			printf("C blizhe k A. primernoe rasstoyanie ot A do C = %i\n", E);
		}
	}
	else {
		printf("B i C raspolozheny na odnom rasstoyanii do A i ono ravno = %i\n", D);
	}

	printf("\nTask 4\n");
	printf("Enter Ax: ");
	scanf_s("%i", &Ax);
	printf("Enter Ay: ");
	scanf_s("%i", &Ay);
	if (Ax < 0) {
		if (Ay > 0) {
			printf("2 ctvert");
		}
		else {
			printf("3 ctvert");
		}
	}
	else {
		if (Ay > 0) {
			printf("1 ctvert");
		}
		else {
			printf("4 ctvert");
		}
	}

	printf("\nTask 5\n");
	printf("Enter number: ");
	scanf_s("%i", &A);
	if (A != 0) {
		if (A > 0) {
			if (A % 2 == 0) {
				printf("polozhitelnoe chetnoe chislo");
			}
			else {
				printf("polozhitelnoe nechetnoe chislo");
			}
		}
		else {
			if (A % 2 == 0) {
				printf("otritsatelnoe chetnoe chislo");
			}
			else {
				printf("otritsatelnoe nechetnoe chislo");
			}
		}
	}
	else {
		printf("nulevoe chislo");
	}

	printf("\nTask 6\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	if (A % 2 == 0) {
		if (A > 9) {
			if (A > 99) {
				printf("chetnoe trehznachnoe chislo");
			}
			else {
				printf("chetnoe dvuznachnoe chislo");
			}
		}
		else {
			printf("chetnoe odnoznachnoe chislo");
		}
	}
	else {
		if (A > 9) {
			if (A > 99) {
				printf("nechetnoe trehznachnoe chislo");
			}
			else {
				printf("nechetnoe dvuznachnoe chislo");
			}
		}
		else {
			printf("nechetnoe odnoznachnoe chislo");
		}
	}
	return 0;
}

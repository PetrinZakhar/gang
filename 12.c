#include <stdio.h> 

int main(void) {

	printf("Task 1\n");
	int day, month;
	printf("Day: ");
	scanf_s("%i", &day);
	printf("Month: ");
	scanf_s("%i", &month);
	switch (day) {
	case 1:
		printf("pervoe ");
		break;
	case 2:
		printf("vtoroe ");
		break;
	case 3:
		printf("tretye ");
		break;
	case 4:
		printf("chetvertoe ");
		break;
	case 5:
		printf("pyatoe ");
		break;
	case 6:
		printf("shestoe ");
		break;
	case 7:
		printf("sedmoe ");
		break;
	case 8:
		printf("vosmoe ");
		break;
	case 9:
		printf("devyatoe ");
		break;
	case 10:
		printf("desyatoe ");
		break;
	case 11:
		printf("odinnadtsatoe ");
		break;
	case 12:
		printf("dvenadtsatoe ");
		break;
	case 13:
		printf("trinadtsatoe ");
		break;
	case 14:
		printf("chetirnadtsatoe ");
		break;
	case 15:
		printf("pyatnadtsatoe ");
		break;
	case 16:
		printf("shestnadtsatoe ");
		break;
	case 17:
		printf("semnadtsatoe ");
		break;
	case 18:
		printf("vosemnadtsatoe ");
		break;
	case 19:
		printf("devyatnadtsatoe ");
		break;
	case 20:
		printf("dvadtsatoe ");
		break;
	case 21:
		printf("dvadtsat pervoe ");
		break;
	case 22:
		printf("dvadtsat vtoroe ");
		break;
	case 23:
		printf("dvadtsat tretye ");
		break;
	case 24:
		printf("dvadtsat chetvertoe ");
		break;
	case 25:
		printf("dvadtsat pyatoe ");
		break;
	case 26:
		printf("dvadtsat shestoe ");
		break;
	case 27:
		printf("dvadtsat sedmoe ");
		break;
	case 28:
		printf("dvadtsat vosmoe ");
		break;
	case 29:
		printf("dvadtsat devyatoe ");
		break;
	case 30:
		printf("tridtsatoe ");
		break;
	case 31:
		printf("tridtsat pervoe ");
		break;
	}
	switch (month) {
	case 1:
		printf("yanvarya");
		break;
	case 2:
		printf("fevralya");
		break;
	case 3:
		printf("marta");
		break;
	case 4:
		printf("aprelya");
		break;
	case 5:
		printf("maya");
		break;
	case 6:
		printf("iunya");
		break;
	case 7:
		printf("iulya");
		break;
	case 8:
		printf("avgusta");
		break;
	case 9:
		printf("sentyabrya");
		break;
	case 10:
		printf("octyabrya");
		break;
	case 11:
		printf("noyabrya");
		break;
	case 12:
		printf("dekabrya");
		break;
	}
	printf("\nTask 2\n");
	int N;
	printf(" Enter N: ");
	scanf_s("%i", &N);
	switch (N) {
	case 0:
		printf("C - sever");
		break;
	case -1:
		printf("B - vostok");
		break;
	case 1:
		printf("3 - zapad");
		break;
	}
	printf("\nTask 3\n");
	int numb;
	printf("Enter number from 10 to 40: ");
	scanf_s("%i", &numb);
	switch (numb) {
	case 10:
		printf("desyat uchebnich zadaniy");
		break;
	case 11:
		printf("odinnadtsat uchebnich zadaniy");
		break;
	case 12:
		printf("dvenadtsat uchebnich zadaniy");
		break;
	case 13:
		printf("trinadtsat uchebnich zadaniy");
		break;
	case 14:
		printf("chetirnadtsat uchebnich zadaniy");
		break;
	case 15:
		printf("pyatnadtsat uchebnich zadaniy");
		break;
	case 16:
		printf("shestnadtsat uchebnich zadaniy");
		break;
	case 17:
		printf("semnadtsat uchebnich zadaniy");
		break;
	case 18:
		printf("vosemnadtsat uchebnich zadaniy");
		break;
	case 19:
		printf("devyatnadtsat uchebnich zadaniy");
		break;
	case 20:
		printf("dvadtsat uchebnich zadaniy");
		break;
	case 21:
		printf("dvadtsat odno uchebnoe zadanie");
		break;
	case 22:
		printf("dvadtsat dva uchebnich zadaniya");
		break;
	case 23:
		printf("dvadtsat tri uchebnich zadaniya");
		break;
	case 24:
		printf("dvadtsat chetire uchebnich zadaniya");
		break;
	case 25:
		printf("dvadtsat pyat uchebnich zadaniy");
		break;
	case 26:
		printf("dvadtsat shest uchebnich zadaniy");
		break;
	case 27:
		printf("dvadtsat sem uchebnich zadaniy");
		break;
	case 28:
		printf("dvadtsat vosem uchebnich zadaniy");
		break;
	case 29:
		printf("dvadtsat devyat uchebnich zadaniy");
		break;
	case 30:
		printf("tridtsat uchebnich zadaniy");
		break;
	case 31:
		printf("tridtsat odno uchebnoe zadanie");
		break;
	case 32:
		printf("tridtsat dva uchebnich zadaniya");
		break;
	case 33:
		printf("tridtsat tri uchebnich zadaniya");
		break;
	case 34:
		printf("tridtsat chetire uchebnich zadaniya");
		break;
	case 35:
		printf("tridtsat pyat uchebnich zadaniy");
		break;
	case 36:
		printf("tridtsat shest uchebnich zadaniy");
		break;
	case 37:
		printf("tridtsat sem uchebnich zadaniy");
		break;
	case 38:
		printf("tridtsat vosem uchebnich zadaniy");
		break;
	case 39:
		printf("tridtsat devyat uchebnich zadaniy");
		break;
	case 40:
		printf("sorok uchebnich zadaniy");
		break;
	}
	printf("\nTask 4\n");
	int a, b, c, d;
	printf("Enter number from 100 to 999: ");
	scanf_s("%i", &numb);
	d = numb % 100;
	a = numb / 100;
	b = (numb / 10) % 10;
	c = numb % 10;
	switch (a) {
	case 1:
		printf("sto ");
		break;
	case 2:
		printf("dvesti ");
		break;
	case 3:
		printf("trista ");
		break;
	case 4:
		printf("chetiresta ");
		break;
	case 5:
		printf("pyatsot ");
		break;
	case 6:
		printf("shestsot ");
		break;
	case 7:
		printf("semsot ");
		break;
	case 8:
		printf("vosemsot ");
		break;
	case 9:
		printf("devyatsot ");
		break;
	}
	if (d > 10 && d < 20) {
		switch (d) {
		case 11:
			printf("odinnadtsat ");
			break;
		case 12:
			printf("dvenadtsat ");
			break;
		case 13:
			printf("trinadtsat ");
			break;
		case 14:
			printf("chetirnadtsat ");
			break;
		case 15:
			printf("pyatnadtsat ");
			break;
		case 16:
			printf("shestnadtsat ");
			break;
		case 17:
			printf("semnadtsat ");
			break;
		case 18:
			printf("vosemnadtsat ");
			break;
		case 19:
			printf("devyatnadtsat ");
			break;
		}
	}
	else {
		switch (b) {
		case 2:
			printf("dvadtsat ");
			break;
		case 3:
			printf("tridtsat ");
			break;
		case 4:
			printf("sorok ");
			break;
		case 5:
			printf("pyatdesyat ");
			break;
		case 6:
			printf("shestdesyat ");
			break;
		case 7:
			printf("semdesyat ");
			break;
		case 8:
			printf("vosemdesyat ");
			break;
		case 9:
			printf("devyanosto ");
			break;
		}
		switch (c) {
		case 1:
			printf("odin");
		break; 
		case 2:
			printf("dva");
			break;
		case 3:
			printf("tri");
			break;
		case 4:
			printf("chetire");
			break;
		case 5:
			printf("pyat");
			break;
		case 6:
			printf("shest");
			break;
		case 7:
			printf("sem");
			break;
		case 8:
			printf("vosem");
			break;
		case 9:
			printf("devyat");
			break;
		}
	}
	
	printf("\nTask 5\n");
	int n, oanimal, ocolor;
	printf("Enter a year: ");
	scanf_s("%i", &n);
	ocolor = n % 5;
	oanimal = n % 12;
	printf("god ");
	switch (ocolor) {
	case 4:
		printf("zelenoy ");
		break;
	case 0:
		printf("krasnoy ");
		break;
	case 1:
		printf("zheltoy ");
		break;
	case 2:
		printf("beloy ");
		break;
	case 3:
		printf("chornoy ");
		break;
	}
	switch (oanimal) {
	case 4:
		printf("krisi");
		break;
	case 5:
		printf("korovi");
		break;
	case 6:
		printf("tigra");
		break;
	case 7:
		printf("zayca");
		break;
	case 8:
		printf("drakona");
		break;
	case 9:
		printf("zmei");
		break;
	case 10:
		printf("loshadi");
		break;
	case 11:
		printf("ovtsi");
		break;
	case 0:
		printf("obezyani");
		break;
	case 1:
		printf("kuritsi");
		break;
	case 2:
		printf("sobaki");
		break;
	case 3:
		printf("svinyi");
		break;
	}
	return 0;
}

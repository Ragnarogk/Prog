// Script_Uebung_31.c : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	unsigned short day, month, year;
	short validInput = 0, leapyear = 0;
	int dayCount = 0;

	printf("Bitte geben Sie ein Datum in der Form [T]T.[M]M.YYYY ein: ");
	scanf("%hu.%hu.%hu%*c", &day, &month, &year);
	printf("\n");

	if (!(year % 400) || (!(year % 4) && (year % 100))) {
		leapyear = 1;
	}

	switch (month) {
	case 12:
		// add 1 to dayCount for october
		dayCount += 1;
	case 10:
		// add 1 to dayCount for august
		dayCount += 1;
	case 8:
		// add 1 to dayCount for july
		dayCount += 1;
	case 7:
		// add 1 to dayCount for may
		dayCount += 1;
	case 5:
		// add 1 to dayCount for march
		dayCount += 1;
	case 3:
		// add 1 to dayCount for january und subtract 2 for february
		// subtract 1
		dayCount -= 1;
	case 1:
		if (day <= 31) {
			validInput = 1;
		}
		break;
	case 11:
		// add 6 to dayCount for october
		dayCount += 1;
	case 9:
		// add 2 to dayCount for july and august
		dayCount += 2;
	case 6:
		// add 1 to dayCount for may
		dayCount += 1;
	case 4:
		// add 2 to dayCount for january and march und subtract 2 for february
		// add nothing
		dayCount += 0;
		if (day <= 30) {
			validInput = 1;
		}
		break;
	case 2:
		// add 1 to dayCount for january
		dayCount += 1;
		if (leapyear) {
			if (day <= 29) {
				validInput = 1;
			}
		}
		else {
			if (day <= 28) {
				validInput = 1;
			}
		}
		break;
	default:
		validInput = 0;
		break;
	}

	// bei ungültiger Eingabe
	if (!validInput) {
		printf("Ungueltiges Datum!\n");
	}
	else {
		dayCount += 30 * (month - 1) + day;
		if (leapyear && month > 2) {
			dayCount += 1;
		}
		printf("Der %d.%d. ist der %d. Tag des Jahres %d!\n", day, month, dayCount, year);
	}

    return 0;
}


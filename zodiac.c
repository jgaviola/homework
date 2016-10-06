/*Joshua Gaviola*/
#include <stdio.h>
int main(void) {

	int month;
	scanf("%d",&month);
	if (month > 12 || month < 1) {
		printf("This month does not exist\n");
	} else if (month == 1) {
		printf("Since you were born in month %d, your zodiac sign is Capricorn\n", month);
		return 0;
	} else if (month == 2) {
		printf("Since you were born in month %d, your zodiac sign is Aquarius\n", month);
		return 0;
	} else if (month == 3) {
		printf("Since you were born in month %d, your zodiac sign is Pisces\n", month);
		return 0;
	} else if (month == 4) {
		printf("Since you were born in month %d, your zodiac sign is Aries\n", month);
		return 0;
	} else if (month == 5) {
		printf("Since you were born in month %d, your zodiac sign is Taurus\n", month);
		return 0;
	} else if (month == 6) {
		printf("Since you were born in month %d, your zodiac sign is Gemini\n", month);
		return 0;
	} else if (month == 7) {
		printf("Since you were born in month %d, your zodiac sign is Cancer\n", month);
		return 0;
	} else if (month == 8) {
		printf("Since you were born in month %d, your zodiac sign is Leo\n", month);
		return 0;
	} else if (month == 9) {
		printf("Since you were born in month %d, your zodiac sign is Virgo\n", month);
		return 0;
	} else if (month == 10) {
		printf("Since you were born in month %d, your zodiac sign is Libra\n", month);
		return 0;
	} else if (month == 11) {
		printf("Since you were born in month %d, your zodiac sign is Scorpio\n", month);
		return 0;
	} else if (month == 12) {
		printf("Since you were born in month %d, your zodiac sign is Saggitarius\n", month);
		return 0;
	}
return 0;
}

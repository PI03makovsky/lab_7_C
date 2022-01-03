#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "date.h"

void date::init(int d, int m, int y) { //ћетод создани€

	day = d;

	month = m;

	year = y;

}

void date::enter() { //ћетод ввода

	printf("\n¬ведите день: ");

	while (scanf("%d", &day) != 1) {

		while (getchar() != '\n');

		printf("ќшибка. ¬ведите число: ");

	}

	printf("\n\n¬ведите мес€ц: ");

	while (scanf("%d", &month) != 1) {

		while (getchar() != '\n');

		printf("ќшибка. ¬ведите число: ");

	}

	printf("\n\n¬ведите год: ");

	while (scanf("%d", &year) != 1) {

		while (getchar() != '\n');

		printf("ќшибка. ¬ведите число: ");

	}

}

void date::print() {

	printf("%d %d %d", day, month, year);

}

int date::difDate(date date1) { //ћетод рассчета дней между датами

	int sum, sum1;

	if (this->month < 3) {

		this->year--, this->month += 12;

	}

	sum = 365 * this->year + this->year / 4 - this->year / 100 + this->year / 400 + (153 * this->month - 457) / 5 + this->day - 306;

	if (date1.month < 3) {

		date1.year--, date1.month += 12;

	}

	sum1 = 365 * date1.year + date1.year / 4 - date1.year / 100 + date1.year / 400 + (153 * date1.month - 457) / 5 + date1.day - 306;

	if (sum < sum1) {

		printf("ќшибка. ¬тора€ дата больше первой.");

	}

	else {

		return sum - sum1;

	}

}
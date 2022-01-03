#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <stdlib.h>

#include "orginf.h"

void orginf::init(int p, int r, tenant orgnf1) { // Метод создания

	price = p;

	rent = r;

	orgnfT = orgnf1;

}

void orginf::enter() { // Метод ввода

	printf("\n\nВведите цену закупа еды: ");

	while (scanf("%d", &price) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите цену закупа еды: ");

	}

	printf("Введите время аренды(только почасовая оплата): ");

	while (scanf("%d", &rent) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите время аренды(только почасовая оплата): ");

	}

	printf("\nВведите ФИО поручителя вслучае форсмажора: ");

	orgnfT.enter();

}

int orginf::valueOrginf() {

	int sum; // общая цена

	int fsum = 500; // фиксированная цена

	sum = fsum + this->price * this->rent;

	printf("\nЦена аренды: %d ", sum);

	return sum;

}

void orginf::print() {

	printf("\nЦена закупа еды: %d", price);

	printf("\nВремя аренды: %d", rent);

	orgnfT.print();

}
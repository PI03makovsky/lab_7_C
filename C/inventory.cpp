#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "inventory.h"

void inventory::init(int nb, int ng, std::string toc, player invntrY) { // Метод создания

	nballs = nb;

	ngates = ng;

	typeOFc += toc;

	invntrP = invntrY;

}

void inventory::enter() { //Метод ввода

	printf("\n\nВведите количество мячей: ");

	while (scanf("%d", &nballs) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите количество мячей: ");

	}

	printf("Введите количество ворот: ");

	while (scanf("%d", &ngates) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите количество ворот: ");

	}

	printf("Введите тип покрытия(Искуственное или натуральное): ");

	getline(std::cin, typeOFc, '\n');

	printf("\nВведите одного из судей, который будет обслуживать ваш матч(Лайнсмен или Судья): ");

	invntrP.enter();

}

int inventory::valueInventory() { //Метод расчета цены

	int rREF = 0;

	rREF = (this->nballs * 100) + (this->ngates * 75);

	printf("\nНадбавка к стоимости: %d ", rREF);

	return rREF;

}

void inventory::print() { //Метод вывода

	printf("\nКоличество мячей: %d", nballs);

	printf("\nВремя аренды: %d", ngates);

	std::cout << "\nТип покрытия: " << typeOFc << std::endl;

	invntrP.print();

}
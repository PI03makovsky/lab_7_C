#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "inventory.h"

void inventory::init(int nb, int ng, std::string toc, player invntrY) { // ����� ��������

	nballs = nb;

	ngates = ng;

	typeOFc += toc;

	invntrP = invntrY;

}

void inventory::enter() { //����� �����

	printf("\n\n������� ���������� �����: ");

	while (scanf("%d", &nballs) != 1) {

		while (getchar() != '\n');

		printf("������. ������� ���������� �����: ");

	}

	printf("������� ���������� �����: ");

	while (scanf("%d", &ngates) != 1) {

		while (getchar() != '\n');

		printf("������. ������� ���������� �����: ");

	}

	printf("������� ��� ��������(������������ ��� �����������): ");

	getline(std::cin, typeOFc, '\n');

	printf("\n������� ������ �� �����, ������� ����� ����������� ��� ����(�������� ��� �����): ");

	invntrP.enter();

}

int inventory::valueInventory() { //����� ������� ����

	int rREF = 0;

	rREF = (this->nballs * 100) + (this->ngates * 75);

	printf("\n�������� � ���������: %d ", rREF);

	return rREF;

}

void inventory::print() { //����� ������

	printf("\n���������� �����: %d", nballs);

	printf("\n����� ������: %d", ngates);

	std::cout << "\n��� ��������: " << typeOFc << std::endl;

	invntrP.print();

}
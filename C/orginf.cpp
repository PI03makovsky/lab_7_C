#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <stdlib.h>

#include "orginf.h"

void orginf::init(int p, int r, tenant orgnf1) { // ����� ��������

	price = p;

	rent = r;

	orgnfT = orgnf1;

}

void orginf::enter() { // ����� �����

	printf("\n\n������� ���� ������ ���: ");

	while (scanf("%d", &price) != 1) {

		while (getchar() != '\n');

		printf("������. ������� ���� ������ ���: ");

	}

	printf("������� ����� ������(������ ��������� ������): ");

	while (scanf("%d", &rent) != 1) {

		while (getchar() != '\n');

		printf("������. ������� ����� ������(������ ��������� ������): ");

	}

	printf("\n������� ��� ���������� ������� ����������: ");

	orgnfT.enter();

}

int orginf::valueOrginf() {

	int sum; // ����� ����

	int fsum = 500; // ������������� ����

	sum = fsum + this->price * this->rent;

	printf("\n���� ������: %d ", sum);

	return sum;

}

void orginf::print() {

	printf("\n���� ������ ���: %d", price);

	printf("\n����� ������: %d", rent);

	orgnfT.print();

}
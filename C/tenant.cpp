#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "tenant.h"

void tenant::init(std::string n, std::string s, std::string p, date DAYDAY1) { //����� ��������

	name += n;
	surname += s;
	patronymic += p;

	tntD = DAYDAY1;

}

void tenant::enter() { //����� �����
	std::cin.ignore();
	printf("\n������� ���: ");
	getline(std::cin, name, '\n');
	printf("\n\n������� �������: ");
	getline(std::cin, surname, '\n');
	printf("\n\n������� ��������: ");
	getline(std::cin, patronymic, '\n');

	printf("\n\n������� ���� ��������:\n");
	tntD.enter();

}

void tenant::print() {
	std::cout << "\n���: " << name << " �������: " << surname << " ��������:" << patronymic;

	printf("���� ��������: ");

	tntD.print();

}
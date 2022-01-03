#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "player.h"

void player::init(std::string p, int w, int h, date DAYDAY2) { //����� ��������

	position += p;

	weigh = w;

	height = h;

	plrD = DAYDAY2;

}

void player::enter() { //����� �����

	printf("\n\n������� �������: ");
	std::cin.ignore();
	getline(std::cin, position, '\n');

	printf("������� ���: ");

	while (scanf("%d", &weigh) != 1) {

		while (getchar() != '\n');

		printf("������. ������� �������: ");

	}

	printf("������� ����: ");

	while (scanf("%d", &height) != 1) {

		while (getchar() != '\n');

		printf("������. ������� ���� ������ ���: ");

	}

	printf("\n������� ����������� ���� ��������: ");

	plrD.enter();

}

void player::print() { // ����� ������

	std::cout << "\n\n����������: " << position;
	printf(" %d %d", weigh, height);

	printf("\n���� ��������: ");

	plrD.print();

}

player* player::player_array(int size)
{
	return new player[size];
}

player player::get_player()
{
	return *this;
}




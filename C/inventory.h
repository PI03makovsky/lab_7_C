#pragma once
#include <string>
#include "player.h"

class inventory { // ����� ���������

public:

	int nballs; // ���������� �����

	int ngates; // ���������� �����

	std::string typeOFc; // ��� ��������

	player invntrP; // ������ � ������� �����

private:

	void init(int nb, int ng, std::string toc, player invntrY); // ����� ��������

	void enter(); //����� �����

	int valueInventory(); //����� ������� ����

	void print(); //����� ������

};
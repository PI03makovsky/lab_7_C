#pragma once
#include <string>
#include "date.h"

class tenant { //����� ���������

private:

	std::string name; //���

	std::string surname; //�������

	std::string patronymic; //��������

	date tntD; //������ � ������� ����

public:

	void init(std::string n, std::string s, std::string p, date DAYDAY1); //����� ��������

	void enter(); //����� �����

	void print(); //����� ������

};
#pragma once

#include "tenant.h"

class orginf { //����� ��������������� ����������

private:

	int price; //���� ������ ���

	int rent; //����� ������

	tenant orgnfT; //������ � ������� ���������

public:

	void init(int p, int r, tenant orgnf1); // ����� ��������

	void enter(); //����� �����

	int valueOrginf(); //����� ������� ����

	void print(); //����� ������

};
#pragma once

class date { //����� ����

private:

	int day; //����

	int month; //�����

	int year; //���

public:

	void init(int d, int m, int y); //����� ��������

	void enter(); //����� �����

	void print(); //����� ������

	int difDate(date date1); //����� �������� ���� ����� ������

	friend int* DateArrayValue(date& date);
};

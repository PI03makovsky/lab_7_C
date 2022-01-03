#pragma once

class date { //Класс дата

private:

	int day; //День

	int month; //Месяц

	int year; //Год

public:

	void init(int d, int m, int y); //Метод создания

	void enter(); //Метод ввода

	void print(); //Метод вывода

	int difDate(date date1); //Метод рассчета дней между датами

	friend int* DateArrayValue(date& date);
};

#pragma once

#include "tenant.h"

class orginf { //Класс организационная информация

private:

	int price; //цена закупа еды

	int rent; //время аренды

	tenant orgnfT; //связка с классом арендатор

public:

	void init(int p, int r, tenant orgnf1); // Метод создания

	void enter(); //Метод ввода

	int valueOrginf(); //Метод расчета цены

	void print(); //Метод вывода

};
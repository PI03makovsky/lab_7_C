#pragma once
#include <string>
#include "player.h"

class inventory { // класс инвентарь

public:

	int nballs; // количество м€чей

	int ngates; // количество ворот

	std::string typeOFc; // тип покрыти€

	player invntrP; // св€зка с классом игрок

private:

	void init(int nb, int ng, std::string toc, player invntrY); // ћетод создани€

	void enter(); //ћетод ввода

	int valueInventory(); //ћетод расчета цены

	void print(); //ћетод вывода

};
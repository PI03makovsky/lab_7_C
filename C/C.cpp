#define _CRT_SECURE_NO_WARNINGS
#include "C.h"

int main() {

	setlocale(LC_ALL, "Rus");
	/*
	date* dataINPUT, dataEST;

	tenant* tenantFIO;

	orginf* orginfINF = new orginf[15];

	player* playerADD;

	inventory* inventoryTHINGS;

	int a = 0, b = 0;

	dataINPUT = new date();

	dataINPUT->init(20, 12, 2021); //Метод создания даты

	dataEST.init(20, 12, 2020); //Метод создания даты

	a = dataINPUT->difDate(dataEST); //Количество дней между датами

	dataINPUT->print(); //Вывод даты

	printf(" ");

	dataEST.print(); //Вывод даты

	printf("\nКоличество дней между датами: %d", a);

	orginfINF->enter(); // Ввод организационной информации

	orginfINF->print(); // Вывод организационной информации

	b = orginfINF->valueOrginf(); // Подсчёты цены

	delete dataINPUT;

	if (orginfINF) {

		delete[] orginfINF;

	}
	*/
	Coppy();
	ArrayPlayer();
	ArrayValue();
}

player& get_player_in_array(player array[], int index)
{
	return array[index];
}

void ArrayPlayer() {
	int size = 0;
	int index = 0;
	printf("\n Сколько игроков создать? ");
	while (scanf("%d", &size) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	player* Players = new player[size];
	Players->player_array(size);
	for (int i = 0; i < size; i++) {
		Players[i].enter();
	}
	printf("\n\n  Все введённые данные: ");
	for (int i = 0; i < size; i++) {
		Players[i].print();
	}
	printf("\n\n  Какой элемент редактировать: ");
	while (scanf("%d", &index) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
	index--;
	get_player_in_array(Players, index).enter();
	printf("\n\n  Результат: ");
	Players[index].print();
	printf("\n\n");
	delete[] Players;
}

void Coppy() {
	player *Player_1 = new player;
	Player_1->enter();
	player Player_2 = Player_1->get_player();
	printf("\n\n\n Игрок 1:");
	Player_1->print();
	printf("\n\n\n Игрок 2:");
	Player_2.print();

	delete Player_1;
}
int* DateArrayValue(date& Date) {
	static int mas[4];
	mas[0] = Date.day;
	mas[1] = Date.month;
	mas[2] = Date.year;

	return mas;
}
void ArrayValue() {
	
	date Date = date();

	Date.enter();
	int* mas = DateArrayValue(Date);

	printf("\n Введённая дата в массив: %d.%d.%d", mas[0], mas[1], mas[2]);
}
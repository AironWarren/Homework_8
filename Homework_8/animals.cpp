#include <iostream>
#include "animals.hpp"


void Animals::setInformation()
{
	setlocale(LC_ALL, "ru");

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << std::endl;

	std::cout << "Введите сколько опыта: ";
	std::cin >> experience;
	std::cout << std::endl;
	if (experience < 0)
		experience = 0;

	std::cout << "Введите вес инвентаря: ";
	std::cin >> weight;
	std::cout << std::endl;

	std::cout << "Введите скорость: ";
	std::cin >> speed;
	std::cout << std::endl;
	if (speed < 0)
		speed = 0;


	std::cout << "Введите кол-во жизни: ";
	std::cin >> lives;
	std::cout << std::endl;
	if (lives < 1)
		lives = 1;
	else if (lives > 10)
		lives = 10;
	 
	std::cout << "Персонаж создан!\n";
}

void Animals::getInformation() const
{
	setlocale(LC_ALL, "ru");

	std::cout << "Его иформация: " << name << ", "
		<< experience << " xp, "
		<< weight << " kg, "
		<< speed << " sp, "
		<< lives << " hp.\n";
}

void Animals::upSpeed()
{
	setlocale(LC_ALL, "ru");
	speed++;
	std::cout << "========Скорость увеличина============\n";
}

void Animals::downWeight(void)
{
	weight -= 50;
	if (weight <= 0)
	{
		weight = 0;
		std::cout << "=========Конец игры=====================\n";
	}
}
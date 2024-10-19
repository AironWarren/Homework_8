#include <iostream>
#include "animals.hpp"

int main()
{
	setlocale(LC_ALL, "ru");


	Animals lion, elephant;


	// Задача 10.1
	/*std::cout << "Введите имя: ";
	std::cin >> elephant.name;
	std::cout << std::endl;

	std::cout << "Введите сколько опыта: ";
	std::cin >> elephant.experience;
	std::cout << std::endl;

	std::cout << "Введите вес инвентаря: ";
	std::cin >> elephant.weight;
	std::cout << std::endl;

	std::cout << "Введите скорость: ";
	std::cin >> elephant.speed;
	std::cout << std::endl;

	std::cout << "Введите кол-во жизни: ";
	std::cin >> elephant.lives;
	std::cout << std::endl;

	std::cout << "Персонаж создан!\n";
	std::cout << "Его иформация: " << elephant.name << ", "
		<< elephant.experience << " xp, "
		<< elephant.weight << " kg, "
		<< elephant.speed << " sp, "
		<< elephant.lives << " hp.";*/

	// Задача 10.2
	lion.setInformation();
	lion.getInformation();

	// Задача 10.3
	// Были добавлены уловия в методы

	// Задача 10.4
	lion.upSpeed();
	lion.getInformation();

	// Задача 10.5
	lion.downWeight();
	lion.getInformation();
	lion.downWeight();
	lion.getInformation();
	lion.downWeight();
	lion.getInformation();
	return 0;
}
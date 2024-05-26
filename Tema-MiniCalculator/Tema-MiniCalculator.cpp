// Tema-MiniCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Mini Calculator " << std::endl;

	float var1, var2;
	std::cout << "Introduceti var1 " << std::endl;
	std::cin >> var1;

	std::cout << "Introduceti var2 " << std::endl;
	std::cin >> var2;
//Calcul Matematic
	std::cout << "Suma dintre var1 si var2 este: " << var1 + var2 << std::endl;
	std::cout << "Scaderea dintre var1 si var2 este: " << var1 - var2 << std::endl;
	std::cout << "Inmultirea dintre var1 si var2 este: " << var1 * var2 << std::endl;
	std::cout << "Impartirea dintre var1 si var2 este: " << var1 / var2 << std::endl;
//Incrementare si Decrementare
	var1++;
	std::cout << "Incrementare var1 : " << var1++ << std::endl;
	std::cout << "Incrementare var1 : " << ++var1 << std::endl;
	var1--;
	std::cout << "Decrementare var1 : " << var1-- << std::endl;
	std::cout << "Decrementare var1 : " << --var1 << std::endl;

//Comparare intre 2 variabile
	bool var1_MaiMic_var2 = var1 < var2;
	bool var1_MaiMare_var2 = var1 > var2;
	bool var1_egal_var2 = var1 == var2;
	bool var1_diferit_var2 = var1 != var2;

	std::cout << "Comparare a < b " << (var1 < var2 ? "True" : "False") << std::endl;
	std::cout << "Comparare a > b " << (var1 > var2 ? "True" : "False") << std::endl;
	std::cout << "Comparare a == b " << (var1 == var2 ? "True" : "False") << std::endl;
	std::cout << "Comparare a != b " << (var1 != var2 ? "True" : "False") << std::endl;


}


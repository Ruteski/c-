#include <iostream>

void fmain()
{
	setlocale(LC_ALL, "portuguese");

	int Numero01, Numero02;

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;

	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;

	std::cout << "\n\n";

	std::cout << "Digite os 2 n�meros separados por espaco e entao aperte enter: ";
	std::cin >> Numero01 >> Numero02;
	std::cout << "A soma dos n�meros �: " << (Numero01 + Numero02) << std::endl;
}
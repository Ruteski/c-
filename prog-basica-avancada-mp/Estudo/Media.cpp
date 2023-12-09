#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float numero01;
	float numero02;
	float numero03;
	float media{ 0.0 };// ou media = {0.0} ou media = 0.0 ou media(0.0)
	char resposta;

	do
	{
		std::cout << "Digite o primeiro número: ";
		std::cin >> numero01;
		std::cout << "Digite o segundo número: ";
		std::cin >> numero02;
		std::cout << "Digite o terceito número: ";
		std::cin >> numero03;

		media = (numero01 + numero02 + numero03) / 3;

		std::cout << "Os número digitados foram: " << numero01 << " " << numero02 << " " << numero03 << std::endl;
		std::cout << "Média dos números: " << media;

		std::cout << "\nDeseja calcular outra Média Artmética? (Responda S para Sim e N para não:) ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's'); // Sai do loop 

	std::cout << "\nSaindo do programa...";
	
}
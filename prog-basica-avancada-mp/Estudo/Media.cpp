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
		std::cout << "Digite o primeiro n�mero: ";
		std::cin >> numero01;
		std::cout << "Digite o segundo n�mero: ";
		std::cin >> numero02;
		std::cout << "Digite o terceito n�mero: ";
		std::cin >> numero03;

		media = (numero01 + numero02 + numero03) / 3;

		std::cout << "Os n�mero digitados foram: " << numero01 << " " << numero02 << " " << numero03 << std::endl;
		std::cout << "M�dia dos n�meros: " << media;

		std::cout << "\nDeseja calcular outra M�dia Artm�tica? (Responda S para Sim e N para n�o:) ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's'); // Sai do loop 

	std::cout << "\nSaindo do programa...";
	
}
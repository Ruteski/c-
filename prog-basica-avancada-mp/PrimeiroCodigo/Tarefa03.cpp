#include <iostream>
#include <iomanip> // para mostrar o double completo

void fun() {
	setlocale(LC_ALL, "portuguese");

	int NumVidas = 5;
	double numero = 452325.954213;

	std::cout 
		<< "Eu" << std::endl
	    << "vou" << std::endl
	    << "aprender" << "\n" 
		<< "c++" << "\n"
		<< "Vidas do jogador : " << NumVidas << "\n"
		<< "Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << "\n"
		<< "tamanho da variavel: " << sizeof(NumVidas) << "Bytes" << "\n"
		<< "***********************************************************\n"
		<< "valor do numero double: " << std::setprecision(12) << numero << "\n"
		<< "Endereço que NumVidas ocupa na memória RAM: " << &numero << "\n"
		<< "tamanho da variavel: " << sizeof(numero) << "Bytes" << "\n"
		<< std::endl;

	std::cout << "Código em c++!" << std::endl;
	//std::cout << "C++" << std::endl;

	//return 0;
}
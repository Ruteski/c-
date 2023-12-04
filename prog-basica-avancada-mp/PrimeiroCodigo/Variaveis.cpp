#include <iostream>
#include <iomanip>
#include <fcntl.h>  
#include <io.h>

int main()
{
	int Numero;
	float Numero2;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;
	//um é true (verdadeiro)
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	//zero é falso
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";

	//qualquer coisa diferente de zero vira true ao ser atribuido
	//a uma variável do tipo bool!
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "1023460A";
	std::cout << "Valor de bAchou: " << bAchou << "\n";



	Numero = 45;
	Numero2 = 55.56f;

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero << "\n";

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero2 << "\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero3 << "\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Caractere: " << sizeof(Caractere) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << (void*)&Caractere << "\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Caractere2: " << sizeof(Caractere2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << (void*)&Caractere2 << "\n\n";

	std::cout << "*************************************************************\n";
	std::cout << "  ---      MODIFICADORES       ---  \n";
	std::cout << "*************************************************************\n";

	std::cout << "Tamanho char : " << sizeof(char) << std::endl;
	std::cout << "Tamanho int : " << sizeof(int) << std::endl;
	std::cout << "Tamanho short int : " << sizeof(short int) << std::endl;
	std::cout << "Tamanho long int : " << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << "\n\n";

	std::cout << "*************************************************************\n";
	std::cout << "  ---      TAMANHO DAS VARIAVEIS       ---  \n";
	std::cout << "*************************************************************\n";

	// \t insere uma tabulação 
	std::cout << "Tipo\t\t Minimo\t\t Maximo\n\n";

	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t"
		<< +std::numeric_limits<long int>::min() << '\t'
		<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int "
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t"
		<< +std::numeric_limits<long long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << "\n\n";

	std::cout << "*************************************************************\n";
	std::cout << "  ---      CONSTANTES       ---  \n";
	std::cout << "*************************************************************\n";

	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS << "\n\n";

	std::cout << "*************************************************************\n";
	std::cout << "  ---      CARACTERES UNICODE       ---  \n";
	std::cout << "*************************************************************\n";

	_setmode(_fileno(stdout), _O_U16TEXT);
	std::wcout << L"\u00AE" << L" \u263A";
}
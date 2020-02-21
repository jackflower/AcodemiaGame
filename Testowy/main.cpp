#include <iostream>
#include <fstream>
int main()
{
	std::fstream plik;
	plik.open("zorro.txt", std::ios::out);
	plik << "-----" << std::endl;
	plik << "-----" << std::endl;
	plik << "Jacek" << std::endl;
	plik << "-----" << std::endl;
	plik << "-----" << std::endl;
	plik << "-----" << std::endl;

	//std::cout << "Jacek" << std::endl;
	
	getchar();
	return 0;
}
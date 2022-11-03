#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
	std::ifstream myfile("Quaternion.txt"); // load file

	std::string line;
	std::string line2;
	std::string trash;
	float a = 0, ai = 0, aj = 0, ak = 0;
	float b = 0, bi = 0, bj = 0, bk = 0, scalar = 0;
	// setting values from the file
	if (getline(myfile, line))
	{
		std::istringstream ss(line);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> a >> symb1 >> ai >> symb2 >> symb3 >> aj >> symb4 >> symb5 >> ak >> symb6 >> symb7;
		std::cout << "a = " << line << std::endl << std::endl;

		if (symb1 == "-")
		{
			ai *= -1;
		}
		if (symb3 == "-")
		{
			aj *= -1;
		}
		if (symb5 == "-")
		{
			ak *= -1;
		}
	}
	getline(myfile, trash);
	if (getline(myfile, line2))
	{
		std::istringstream ss(line2);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> b >> symb1 >> bi >> symb2 >> symb3 >> bj >> symb4 >> symb5 >> bk >> symb6 >> symb7;
		std::cout << "b = " << line2 << std::endl << std::endl;
		
		if (symb1 == "-")
		{
			bi *= -1;
		}
		if (symb3 == "-")
		{
			bj *= -1;
		}
		if (symb5 == "-")
		{
			bk *= -1;
		}
	}
	std::getline(myfile, trash);
	myfile >> scalar;
	std::cout <<"scalar = " << scalar << std::endl << std::endl;

	
	



	

	system("PAUSE");

	return 0;
}
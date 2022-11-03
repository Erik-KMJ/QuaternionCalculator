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
	int var1, var2, var3, var4;
	int var5, var6, var7, var8, scalar;
	// setting values from the file
	if (getline(myfile, line))
	{
		std::istringstream ss(line);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> var1 >> symb1 >> var2 >> symb2 >> symb3 >> var3 >> symb4 >> symb5 >> var4 >> symb6 >> symb7;
		std::cout << var1 << symb1 << var2 << symb2 << symb3 << var3 << symb4 << symb5 << var4 << symb6 << symb7 << std::endl << std::endl;


	}
	getline(myfile, trash);
	if (getline(myfile, line2))
	{
		std::istringstream ss(line2);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> var5 >> symb1 >> var6 >> symb2 >> symb3 >> var7 >> symb4 >> symb5 >> var8 >> symb6 >> symb7;
		std::cout << var5 << symb1 << var6 << symb2 << symb3 << var7 << symb4 << symb5 << var8 << symb6 << symb7 << std::endl << std::endl;
		//
	}
	std::getline(myfile, trash);
	myfile >> scalar;
	std::cout << scalar;



	

	system("PAUSE");

	return 0;
}
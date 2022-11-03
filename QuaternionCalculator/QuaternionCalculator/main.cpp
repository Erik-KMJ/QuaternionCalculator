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
	float var1 = 0, var2 = 0, var3 = 0, var4 = 0;
	float var5 = 0, var6 = 0, var7 = 0, var8 = 0, scalar = 0;
	// setting values from the file
	if (getline(myfile, line))
	{
		std::istringstream ss(line);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> var1 >> symb1 >> var2 >> symb2 >> symb3 >> var3 >> symb4 >> symb5 >> var4 >> symb6 >> symb7;
		std::cout << var1 << symb1 << var2 << symb2 << symb3 << var3 << symb4 << symb5 << var4 << symb6 << symb7 << std::endl << std::endl;

		if (symb1 == "-")
		{
			var2 *= -1;
		}
		if (symb3 == "-")
		{
			var3 *= -1;
		}
		if (symb5 == "-")
		{
			var4 *= -1;
		}
	}
	getline(myfile, trash);
	if (getline(myfile, line2))
	{
		std::istringstream ss(line2);

		std::string symb1, symb2, symb3, symb4, symb5, symb6, symb7;
		std::string symb8, symb9, symb10, symb11, symb12, symb13, symb14;


		ss >> var5 >> symb1 >> var6 >> symb2 >> symb3 >> var7 >> symb4 >> symb5 >> var8 >> symb6 >> symb7;
		std::cout << var5 << symb1 << var6 << symb2 << symb3 << var7 << symb4 << symb5 << var8 << symb6 << symb7 << std::endl << std::endl;
		
		if (symb1 == "-")
		{
			var6 *= -1;
		}
		if (symb3 == "-")
		{
			var7 *= -1;
		}
		if (symb5 == "-")
		{
			var8 *= -1;
		}
	}
	std::getline(myfile, trash);
	myfile >> scalar;
	std::cout << scalar << std::endl << std::endl;

	
	



	

	system("PAUSE");

	return 0;
}
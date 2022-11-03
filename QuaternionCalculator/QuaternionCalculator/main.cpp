#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream myfile("Quaternion.txt"); // load file

	std::string a;
	std::string b;
	std::string scalar;
	std::string trash;

	// setting values from the file
	if (myfile.is_open())
	{
		std::getline(myfile, a);
		std::getline(myfile, trash); // blank line in file
		std::getline(myfile, b);
		std::getline(myfile, trash); // blank line in file
		std::getline(myfile, scalar);

		myfile.close();
	}
	else
	{
		std::cout << "ERROR LOADING FILE!!! \n\n";
	}

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << scalar << std::endl << std::endl;

	system("PAUSE");

	return 0;
}
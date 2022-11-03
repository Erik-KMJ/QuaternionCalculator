#include <iostream>
#include <fstream>

int main()
{
	std::ifstream myfile("Quaternion.txt"); // load file

	int a = 0;

	// setting values from the file
	if (myfile.is_open())
	{
		myfile >> a;

		myfile.close();

	}
	else
	{
		std::cout << "ERROR LOADING FILE!!! \n\n";
	}

	std::cout << a;

	system("PAUSE");

	return 0;
}
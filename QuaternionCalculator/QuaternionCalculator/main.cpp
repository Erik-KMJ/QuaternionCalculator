#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string GetOpperationSign(float num)
{
	if (num >= 0)
	{
		return "+";
	}
	else
	{
		return "";
	}
}

void QuaternionAddition(float a, float ai, float aj, float ak, float b, float bi, float bj, float bk)
{
	float result, resulti, resultj, resultk;

	result = a + b;
	resulti = ai + bi;
	resultj = aj + bj;
	resultk = ak + bk;

	std::string sign1 = GetOpperationSign(resulti);
	std::string sign2 = GetOpperationSign(resultj);
	std::string sign3 = GetOpperationSign(resultk);

	std::cout << result << sign1 << resulti << "i" << sign2 << resultj << "j" << sign3 << resultk << "k" << std::endl << std::endl;
}

void QuaternionSubtraction(float a, float ai, float aj, float ak, float b, float bi, float bj, float bk)
{
	float result, resulti, resultj, resultk;

	result = a - b;
	resulti = ai - bi;
	resultj = aj - bj;
	resultk = ak - bk;

	std::string sign1 = GetOpperationSign(resulti);
	std::string sign2 = GetOpperationSign(resultj);
	std::string sign3 = GetOpperationSign(resultk);

	std::cout << result << sign1 << resulti << "i" << sign2 << resultj << "j" << sign3 << resultk << "k" << std::endl << std::endl;
}

void QuaternionMultiplication(float a, float ai, float aj, float ak, float b, float bi, float bj, float bk)
{
	float result, resulti, resultj, resultk;

	result = (a * b) - (ai * bi) - (aj * bj) - ( ak * bk);
	resulti = (a * bi) + (ai * b) - (aj * bk) + (ak * bj);
	resultj = (a * bj) + (ai * bk) + (aj * b) - (ak * bi);
	resultk = (a * bk) - (ai * bj) + (aj * bi) + (ak * b);

	std::string sign1 = GetOpperationSign(resulti);
	std::string sign2 = GetOpperationSign(resultj);
	std::string sign3 = GetOpperationSign(resultk);

	std::cout << result << sign1 << resulti << "i" << sign2 << resultj << "j" << sign3 << resultk << "k" << std::endl << std::endl;
}

void QuaternionDotProduct(float a, float ai, float aj, float ak, float b, float bi, float bj, float bk)
{
	float result;

	result = (a * b) + (ai * bi) + (aj * bj) + (ak * bk);

	std::cout << result << std::endl << std::endl;
}

void QuaternionConjugate(float a, float ai, float aj, float ak)
{
	float result, resulti, resultj, resultk;

	result = a;
	resulti = ai * -1;
	resultj = aj * -1;
	resultk = ak * -1;

	std::string sign1 = GetOpperationSign(resulti);
	std::string sign2 = GetOpperationSign(resultj);
	std::string sign3 = GetOpperationSign(resultk);

	std::cout << result << sign1 << resulti << "i" << sign2 << resultj << "j" << sign3 << resultk << "k" << std::endl << std::endl;
}

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

	std::cout << "a + b = " ;
	QuaternionAddition(a, ai, aj, ak, b, bi, bj, bk);

	std::cout << "a - b = " ;
	QuaternionSubtraction(a, ai, aj, ak, b, bi, bj, bk);

	std::cout << "b - a = " ;
	QuaternionSubtraction(b, bi, bj, bk, a, ai, aj, ak);

	std::cout << "ab = ";
	QuaternionMultiplication(a, ai, aj, ak, b, bi, bj, bk);

	std::cout << "ba = ";
	QuaternionMultiplication(b, bi, bj, bk, a, ai, aj, ak);

	std::cout << "a.b = ";
	QuaternionDotProduct(a, ai, aj, ak, b, bi, bj, bk);

	std::cout << "a* = ";
	QuaternionConjugate(a, ai, aj, ak);

	std::cout << "a^-1 = ";


	std::cout << "ta = ";
	
	

	system("PAUSE");

	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	fstream myfile;

	int hor = 0;
	int dep = 0;
	int aim = 0;
	int val = 0;

	myfile.open("input.txt", ios::in);

	while (getline(myfile, line))
	{
		if (line.find('f') != std::string::npos)
		{
			val = line.at(8) - 48;
			hor = hor + val;
			dep = dep + (aim * val);
		}

		if (line.find('u') != std::string::npos)
		{
			val = line.at(3) - 48;
			aim = aim - val;
		}

		if (line.find('n') != std::string::npos)
		{
			val = line.at(5) - 48;
			aim = aim + val;
		}

	}

	cout << dep << "\n" << hor << "\n" << aim << "\n";
	cout << dep * hor << "\n";

	myfile.close();

	return 0;
}
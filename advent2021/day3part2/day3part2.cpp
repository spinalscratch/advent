#include <iostream>
#include <fstream>
#include <string>
#include <math.h> 
using namespace std;

int main()
{

	int i{};
	int oxygen{};
	int cotwo{};
	int num{};
	int more{};
	int binaryarray[1000]{};
	
	fstream datafile;
	string line;


    datafile.open("input.txt");

	while (getline(datafile, line))
    {
		for (i = 0; i < 12; i++)
		{
			if (line.at(i) - 48 == 1)
			{
				binaryarray[num] = binaryarray[num] + pow(2, 11 - i);
			}
		}
		num++;
	}

	for (i = 0; i < 1000; i++)
	{
		if (binaryarray[i] >= 2048)
		{
			more++;

		}
	}

	myfile.close();
	myfile.open("input.txt", ios::in);

	while (getline(myfile, line))
	{
		if (((line.at(0) - 48) == binarray[0]) && (line.at(1) - 48 == binarray[1]) && (line.at(2) - 48 == binarray[2]) &&
			(line.at(3) - 48 == binarray[3]) && (line.at(4) - 48 == binarray[4]) && (line.at(5) - 48 == binarray[5]) &&
			(line.at(6) - 48 == binarray[6]) && (line.at(7) - 48 == binarray[7]) && (line.at(8) - 48 == binarray[8]) &&
			(line.at(9) - 48 == binarray[9]) && (line.at(10) - 48 == binarray[10]) && (line.at(11) - 48 == binarray[11]))
		{
			cout << "\n" << "and the winner is me" << "\n";
			for (i = 0; i < 12; i++)
			{
				if (binarray[i] == 1)
				{
					oxygen = oxygen + pow(2, k);
					k--;
				}
				else if (binarray[i] == 0)
				{
					cotwo = cotwo + pow(2, k);
					k--;
				}
			}
		}
	}


	datafile.close();

	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <math.h> 
using namespace std;

int main()
{
	string line;
	fstream myfile;

	int zeroarray[12]{};
	int onearray[12]{};
	int binarray[12]{};
	int i{};

	int oxygen{};
	int cotwo{};
	int k{ 11 };

	myfile.open("input.txt", ios::in);

	while (getline(myfile, line))
	{
		for (i = 0; i < 12; i++)
		{
			if ((line.at(i) - 48) == 0)
				zeroarray[i]++;

			else if ((line.at(i) - 48) == 1)
				onearray[i]++;
		}
	}

	for (i = 0; i < 12; i++)
	{
		if (onearray[i] > zeroarray[i])
			binarray[i] = 1;

		else if (onearray[i] < zeroarray[i])
			binarray[i] = 0;
	}

	for (i = 0; i < 12; i++)
	{
		cout << binarray[i] << " ";
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

	cout << "oxygen is " << oxygen << " and co2 is " << cotwo << endl;
	cout << "life support rating is " << oxygen * cotwo;

	myfile.close();

	return 0;
}
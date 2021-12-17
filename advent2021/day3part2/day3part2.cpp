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
		if (line.at(0) - 48 == binarray[0] && oxygen < 2048)
		{
			oxygen = oxygen + 2048
		}
     
	}

	cout << "oxygen is " << oxygen << " and co2 is " << cotwo << endl;
	cout << "life support rating is " << oxygen * cotwo;

	myfile.close();

	return 0;
}
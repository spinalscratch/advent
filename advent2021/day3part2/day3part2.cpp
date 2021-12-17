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

	int gamma{};
	int epsilon{};
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

	while (getline(myfile, line))
	{
		if ((line.at(0) == binarray[0])&& (line.at(1) == binarray[1])&& (line.at(2) == binarray[2])&& 
			(line.at(3) == binarray[3])&& (line.at(4) == binarray[4])&& (line.at(5) == binarray[5])&& 
			(line.at(6) == binarray[6])&& (line.at(7) == binarray[7])&& (line.at(8) == binarray[8])&& 
			(line.at(9) == binarray[9])&& (line.at(10) == binarray[10])&& (line.at(11) == binarray[11]))
			cout << "and the winner is me" << "\n"
	}

	myfile.close();

	return 0;
}
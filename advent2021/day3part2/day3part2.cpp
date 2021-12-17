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

	cout << more << endl;


	datafile.close();

	return 0;
}
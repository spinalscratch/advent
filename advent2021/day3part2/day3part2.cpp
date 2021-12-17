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
		{
			gamma = gamma + pow(2, k);
			cout << gamma << " ";
			k--;
		}
		else if (onearray[i] < zeroarray[i])
		{
			epsilon = epsilon + pow(2, k);
			cout << epsilon << " ";
			k--;
		}
	}

	cout << "\n";

	for (i = 0; i < 12; i++)
		cout << zeroarray[i] << " ";

	cout << "\n";

	for (i = 0; i < 12; i++)
		cout << onearray[i] << " ";

	cout << "\n";

	cout << "the so called result is " << epsilon * gamma;

	myfile.close();

	return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int array1[2000];
    int n = 0;
    int val = 0;

    fstream datafile;

    void bubbleSort(int list[], int length);
    void selectionSort(int list[], int length);

    datafile.open("input.txt");

    while (!datafile.eof())
    {
        datafile >> array1[n];
        if (datafile.fail()) break;
        //cout << array1[n] << endl;
        n++;
    }

    datafile.close();

    for (int i = 0; i < n - 2; i++)
    {
        if ((array1[i] + array1[i + 1] + array1[i + 2])
            <
            (array1[i + 1] + array1[i + 2] + array1[i + 3]))
        {
            val++;
        }
    }

    cout << val << "\n";

    system("pause");
    return 0;
}
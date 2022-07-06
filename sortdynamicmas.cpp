#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void sortmass(string*, int*);

void sortmass(string* str, int *size)
{
	setlocale(LC_ALL, "");
	for (int start = 0; start < *size; ++start)
	{
		int smallindex = start;
		for (int currentIndex = smallindex; currentIndex < *size; ++currentIndex)
		{
			if (str[smallindex] > str[currentIndex])
				swap(str[smallindex], str[currentIndex]);
		}
	}
	for (int i = 0; i < *size; ++i)
	{
		cout << str[i] << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	cout << "Ñêîëüêî èì¸í áóäåò â ñïèñêå: ";
	int lenght;
	cin >> lenght;

	string *array = new string[lenght];

	for (int size = 0; size < lenght; ++size)
	{
		cout << "Ââåäèòå èìÿ #" << size + 1 << ": ";
		cin >> array[size];
	}

	sortmass(*&array, &lenght);


	delete[] array;

	system("pause");
	return 0;
}

#include <iostream>

int main()
{
	int const size = 5;
	int array[size] = { 5, 2, 4, 3, 1 };
	
	for (int startnumber = 0; startnumber < size; ++startnumber)
	{
		for (int currentnubmer = 0; currentnubmer < size - 1; ++currentnubmer)
		{
			if (array[currentnubmer] > array[currentnubmer + 1])
				std::swap(array[currentnubmer], array[currentnubmer + 1]);
		}
	}
	for (int index = 0; index < size; ++index)
	{
		std::cout << array[index];
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <algorithm>
int main()
{
	int const lenght = 5;
	int array[lenght] = { 20, 10, 150 , 30, 5};
	// Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся)
	
	for (int startIndex = 0; startIndex < lenght-1; startIndex++)
	{
		int smallindex = startIndex;

		// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации. 
		// Начинаем с того, что наименьший элемент в этой итерации – это первый элемент (индекс 0)
		for (int currentIndex = startIndex+1; currentIndex < lenght; currentIndex++)
		{
			if (array[currentIndex] > array[smallindex])
			{
				smallindex = currentIndex;
			}
		}
		std::swap(array[smallindex], array[startIndex]);
	}
	for (int index = 0; index < lenght; index++)
	{
		std::cout << array[index] << "\n";
	}
	
		
		

		// Затем ищем элемент поменьше в остальной части массива
	
	
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			
			// smallestIndex теперь наименьший элемент.
			// Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
			
	
	// Теперь, когда весь массив отсортирован - выводим его на экран
	
	system("Pause");
	return 0;
}

#include <iostream>
#include <algorithm>
int main()
{
	int const lenght = 5;
	int array[lenght] = { 20, 10, 150 , 30, 5};
	// ���������� ������ ������� ������� (����� ����������, �� ��� ����� ������������ � ���� �������, ����� �� �� ���� ���������)
	
	for (int startIndex = 0; startIndex < lenght-1; startIndex++)
	{
		int smallindex = startIndex;

		// � ���������� smallestIndex �������� ������ ����������� ��������, ������� �� ����� � ���� ��������. 
		// �������� � ����, ��� ���������� ������� � ���� �������� � ��� ������ ������� (������ 0)
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
	
		
		

		// ����� ���� ������� �������� � ��������� ����� �������
	
	
			// ���� �� ����� �������, ������� ������ ������ ����������� ��������,
			
			// smallestIndex ������ ���������� �������.
			// ������ ������� ���� ��������� ���������� ����� � ���, ������� �� ����������
			
	
	// ������, ����� ���� ������ ������������ - ������� ��� �� �����
	
	system("Pause");
	return 0;
}
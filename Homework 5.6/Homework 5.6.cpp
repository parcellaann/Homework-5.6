// Homework 5.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
	int rows = 1, columns = 1;
	std::cout << "Enter the number of rows:\n";
	std::cin >> rows;
	std::cout << "Enter the number of columns:\n";
	std::cin >> columns;
	int arr[100][100];
	std::srand(std::time(0));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % (10);
		}

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\n\nTask 1:\n";

	for (int i = 0; i < rows; i++)
	{
		bool flag = true;
		while (flag)
		{
			flag = false;
			for (int j = 0; j < columns - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					flag = true;
					int z = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = z;
				}
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\n\nTask 2:\n";

	for (int i = 0; i < rows; i++)
	{
		int z = arr[i][0];
		arr[i][0] = arr[i][columns - 1];
		arr[i][columns - 1] = z;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}


}

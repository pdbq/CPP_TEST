#include <iostream>
#include <ctime>

int main()
{
	const int n = 10;
	const int m = 10;

	int matrix[n][m];

	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 21 - 10;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	int count[n];
	bool checkNegativeNumber = false;
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < 0)
			{
				temp++;
				checkNegativeNumber = true;
			}
		}
		count[i] = temp;
	}

	if (checkNegativeNumber)
	{
		int max = count[0];
		for (int i = 0; i < n; i++)
		{
			if (count[i] > max)
			{
				max = count[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (count[i] == max)
			{
				std::cout << "\n" << i;
			}
		}
	}
	else
	{
		std::cout << "\n\nUndefined";
	}

	std::cin.get();
	std::cin.get();
	return 0;
}

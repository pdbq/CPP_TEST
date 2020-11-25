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

	int count = 0, row[n], r = 0;
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

		if (count < temp)
		{
			count = temp;
			row[r] = i;
			r++;
		}
	}


	if (checkNegativeNumber)
	{
		for (int i = 0; i < r; i++)
		{
			std::cout << "\n" << row[i];
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
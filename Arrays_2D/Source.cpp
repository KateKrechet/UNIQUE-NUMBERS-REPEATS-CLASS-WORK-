#include <iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");
	/*const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS] =
	{
		{},
		{1,2,3},
		{4,5,6},
		{7,8,9}

	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}*/
	printf("Вывод массива случайных чисел:\n");
	const int ROWS = 5;
	const int COLS = 5;
	int arr[ROWS][COLS];
	//формирование массива случайных чисел
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 3;
		}
	}
	//вывод массива случайных чисел на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//сумма элементов массива
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	printf("Сумма элементов массива: %d\n", sum);
	float sr_arifm = (float)sum / (ROWS * COLS);
	cout << "Среднее арифметическое элементов массива: " << sr_arifm << endl;
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	printf("Максимальный элемент: %d\n", max);
	printf("Минимальный элемент: %d\n", min);
	//сортировка пузырьком
	for (int i = 0; i < ROWS; i++) //выбирает элемент, в который нужно поместить минимальный элемент
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] < arr[i][j]) //если перебираемый меньше выбранного элемента
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
	//вывод отсортированного массива по возрастанию на экран
	printf("Вывод отсортированного по возрастанию массива:\n");
	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
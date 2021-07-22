#include <iostream>
using namespace std;
using std::cout;
//#define HOMEWORK
//#define SORT_1
#define SORT_2//работает только для статических массивов

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
#ifdef HOMEWORK
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
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] < arr[i][j])
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
#endif // HOMEWORK

#ifdef SORT_1
	cout << "Вывод массива случайных чисел: " << endl;
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];
	//формирование массива случайных чисел
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
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
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				if (k == i)//если перебирается строка с выбранным элементом
					l = j + 1;//то перебор начинается с элемента, следующего за выбранным
				else l = 0;//все остальные строки начинаются сначала
				for (/*int l=k==i?j+1:0*/; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
					iterations++;
				}


			}
		}
	}

	cout << "Сортировка выполнена за " << iterations << " итераций" << endl;
	cout << "В процессе сортировки выполнено " << exchanges << " перестановок" << endl;

	printf("Вывод отсортированного по возрастанию массива:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif // SORT_1

#ifdef SORT_2
	cout << "Вывод массива случайных чисел: " << endl;
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];
	//формирование массива случайных чисел
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
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
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS * COLS; j++)
		{
			iterations++;
			if (arr[0][j] > arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
				exchanges++;
			}
		}
	}

	cout << "Сортировка выполнена за " << iterations << " итераций" << endl;
	cout << "В процессе сортировки выполнено " << exchanges << " перестановок" << endl;

	printf("Вывод отсортированного по возрастанию массива:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif // SORT_2


}
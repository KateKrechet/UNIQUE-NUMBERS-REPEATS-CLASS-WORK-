#include <iostream>
using namespace std;
#define tab "\t";
#define UNIQUE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef UNIQUE
	const int n = 10;
	int arr[n];
	//√енераци€ уникальных случайных чисел
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;//надеемс€, что сгенерировалось уник случ число
			//но это необходимо проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])//если произошло совпадение
				{
					unique = false;//сгенерированное случ число не €вл€етс€ уникальным
					break;//прерывает текущую итерацию и все последующие итерации
				}
			}
		} while (!unique);//выполн€етс€ пока не уникально


	}
	//¬ывод на экран 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // UNIQUE


}
#include <stdlib.h>

// ���������� ������������� ����� � ������� arr ������� N
int max_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i <= N; i++)
	{
		if (arr[i] > arr[ind])
			ind = i;
	}
	return ind;
}

// ���������� ������������ ����� � ������� arr ������� N
int min_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i <= N; i++)
	{
		if (arr[i] < arr[ind])
			ind = i;
	}
	return ind;
}
// ���������� ����� ���� � ������� arr �� ������������ �� �������������
int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int min = min_el(arr, N);
	int max = max_el(arr, N);
	
	if(arr[min] < arr[max])
	{ 	
		for (int i = min + 1; i < max; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	else
	{
		for (int i = max + 1; i < min; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}

}

// ���������� ������� arr �������� size ���������� ���������� �� min �� max
int gen_arr(int arr[], int min, int max, int size)
{
	for (int i = 0; i <= size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
	return 0;
}
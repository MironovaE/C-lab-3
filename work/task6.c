#include <stdlib.h>
#include <stdio.h>

// ���������� ������������� ����� � ������� arr ������� N
int max_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[ind])
		{
			ind = i;
		}
	}
	return ind;
}

// ���������� ������������ ����� � ������� arr ������� N
int min_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < arr[ind])
		{
			ind = i;
		}
	}
	return ind;
}
// ���������� ����� ���� � ������� arr �� ������������ �� �������������
int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int min = min_el(arr, N);
	int max = max_el(arr, N);
	
	if((min < max) && (max - 1 != min))
	{ 	
		for (int i = min + 1; i < max; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	else if ((min > max) && (min + 1 != max))
	{
		for (int i = max + 1; i < min; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	else
	{
		return 0;
	}

}


#include <stdlib.h>
#include <stdio.h>

// ���������� ������� ������� �������������� ����� � ������� arr ������� N
int negative(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
			return i;
	}
}

// ���������� ������� ���������� �������������� ����� � ������� arr ������� N
int positive(int arr[], int N)
{
	for (int i = N - 1; i > 0; i--)
	{
		if (arr[i] > 0)
			return i;
	}
}
// ���������� ����� ���� � ������� arr �� ������� �������������� 
//  �������������� �� ���������� �������������� � �������
int getSumInt(int arr[], int N)
{
	int sum = 0;
	int neg = negative(arr, N);
	int pos = positive(arr, N);
	for (int i = neg + 1; i < pos; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

// ���������� ������� arr �������� size ���������� ���������� �� min �� max
int gen_arr(int arr[], int min, int max, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
	return 0;
}
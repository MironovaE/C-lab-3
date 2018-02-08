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
	if (pos > neg)
	{
		for (int i = neg + 1; i < pos; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	else if (pos < neg)
	{
		for (int i = pos + 1; i < neg; i++)
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


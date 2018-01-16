/*������ ��������� ������������� ��� ������� ������������� �������� �
������ (� ��� ����� ��������, ���� � ��), �� ����������� ���������: '\n' � '\0'*/

#include <stdio.h>
#include <string.h>
#define SIZE 2048
#define SIZE_ASCII 256

//����� �������� � �� ����������
int printf_arr(char arr_char[], int arr_count[])
{
	for (int i = 0; arr_char[i] != 0; i++)
	{
		printf("%c\t%d\n", arr_char[i], arr_count[i]);
	}
	return 0;
}
//--------------------------------------------------------


//���������� ��������
int InsertionSort(char * arr_char, int * arr_count, int size)
{
	int tmp_int = 0;
	char tmp_char = 0;

	for (int i = 0; 0 < size - 1; i++)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr_count[i] > arr_count[j])
			{
				//����������� ��������� ������� count
				tmp_int = arr_count[j];
				arr_count[j] = arr_count[i];
				arr_count[i] = tmp_int;
				//����������� ��������� ������� count
				tmp_char = arr_char[j];
				arr_char[j] = arr_char[i];
				arr_char[i] = tmp_char;
			}
		}	
	}
	return 0;
}
//--------------------------------------------------------

//�������� ������� ������� � �������
//���������� ������ �������� ��� -1 ���� �� �����������
int poisk(char simvol, char arr[])
{
	for (int i = 0; arr[i] != 0; i++)
	{
		if (arr[i] == simvol)
		{
			return i;
		}
	}
	return -1;
}
//--------------------------------------------------------


int main()
{
	char buf[SIZE] = { 0 };	//������ �������� �������������
	char arr_char[SIZE_ASCII] = { 0 };	//������ ��������
	int arr_count[SIZE_ASCII] = { 0 };	//������ ���������� ��������

	printf("Enter a text string: ");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = 0;

	//��������� ������ ���������� ���������
	for (int ind = 0, i = 0; buf[i] != 0; i++)
	{
		if (poisk(buf[i], arr_char) == -1)
		{
			arr_char[ind] = buf[i];
			ind++;
		}
	}	

	//������������ ���������� ���������
	for (int i = 0; arr_char[i] != 0; i++)
	{
		for (int j = 0; buf[j] != 0; j++)
		{
			if (arr_char[i] == buf[j])
			{
				arr_count[i]++;
			}
		}
	}

	//��������� �������
	InsertionSort(arr_char, arr_count, SIZE_ASCII);
	//����� ��������������� �������� � �������
	printf_arr(arr_char, arr_count);	
	return 0;
}
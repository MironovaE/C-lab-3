#include <stdio.h>
#include "task3.h"
#define OUT 0
#define IN 1

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0;// �������� � �������
	int cn = 0; //������� �������� ��� ������ �����
	int len = 0;//������� ����
	int max = 0;//����� ������� �����
	int flag = OUT;
	while (1)
	{
		if (buf[i] != ' '&& buf[i] != '\0' && flag == OUT)
		{
			flag = IN;
			len ++;
			j = i;
		}
		else if (buf[i] != ' '&& buf[i] != '\0'&& flag == IN)
		{
			len++;
		}
		else if (buf[i] == ' '&& flag == IN)
		{
			flag = OUT;
			if (len > max)
			{
				max = len;
				for (j = 0; j <= max; j++)
				{
					word[j] = buf[cn++];
				}
				word[j] = '\0';
				len = 0;
			}
		}
		else if (buf[i] == '\0' || buf[i] == '\0' && flag == IN)
		{
			flag = OUT;
			if (len > max)
			{
				max = len;
				for (j = 0; j <= max; j++)
				{
					word[j] = buf[cn++];
				}
				word[j] = '\0';
				len = 0;
			}
			break;
		}
		i++;
	}
	return max;
}
#include <string.h>

//������ ����� �� buf ������������� �� � ������� ind � ������ word
void write(char buf[], char word[], int ind)
{
	int i = 0;
	for (; buf[ind] != 0 && buf[ind] != ' ' && buf[ind] != '\n'; i++, ind++)
	{
		word[i] = buf[ind];
	}
	word[i] = '\0';
}

//������� ������ ����� � ������� buf ������������� � ������� ind. 
//������� ��������� ������ �����
int count(char buf[], int ind)
{
	int count = 0;

	for (; buf[ind] != 0 && buf[ind] != ' ' && buf[ind] != '\n'; ind++)
	{
		count++;
	}
	return count;
}


int getMaxWord(char buf[], char word[])
{
	int i = 0;
	int len_word = 0;	//������ ����� � ������� word
	int len_nw = 0;	//������ ����� � ������������� �������

	buf[strlen(buf) - 1] = 0;

	while (1)
	{
		if ((buf[i] != ' ') && (buf[i] != 0))
		{			
			len_nw = count(buf, i); //��������� ������ ����� � ������� buf

			//���� �������������� ����� ������ ����� ������������ � 
			//������� word ���������� ��� � ������ word
			if (len_nw > len_word) 
			{
				write(buf, word, i);
				len_word = len_nw;
			}
			i = i + len_nw; //��������� � ������ ���������� ����� � ������� buf
		}

		i++;

		if ((buf[i] == 0)||(buf[i] == '\n'))
		{
			return len_word;
		}
	}
}


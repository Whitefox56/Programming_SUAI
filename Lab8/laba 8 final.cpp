#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include < string.h >
void main()
{
	system("chcp 1251");
	char str[100];
	int a;
	int s = 0;
	printf("������� �������\n");
	gets_s(str);
	char *ptr;                                      //���������� ����������� ��� ������� ������������ �������
	char *ptr2;                                     //���������� ����������� ��� ������� ������������ �������
	char *space = 0;                                   //���������� ����������� ��� �������
	ptr2 = &str[0];
	a = strlen(str);
	ptr = &str[a];
	while ((ptr-- != ptr2) && (s != 3))
	{
		if ((*(ptr + 1) > 'A' && *(ptr + 1) < 'Z') || (*(ptr + 1) > 'a' && *(ptr + 1) < 'z'))
		{
			if ((*ptr++ == ' ') && (s > 0))
			{
				while ((*ptr++ = *space++) != '\0');
				s = 3;
			}
			else
			{
				ptr--;
			}
		}
		if ((*(ptr - 1) > 'A' && *(ptr - 1) < 'Z') || (*(ptr - 1) > 'a' && *(ptr - 1) < 'z'))
		{
			if ((*ptr == ' ') && (s == 0))
			{
				s = 1;
				space = ptr + 1;
			}
		}
	}
	printf("%s", str);
	_getch();
}

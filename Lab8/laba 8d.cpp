#include <stdio.h>
#include<conio.h>
#include < string.h >
void main()
{
	char str[100];
	int a;
	int s = 0;
	printf("Vvedite stroky\n");
	gets_s(str);
	char *ptr;                                      //Объявление указателеля для первого проверяемого символа
	char *ptr2;                                     //Объявление указателеля для второго проверяемого символа
	char *space=0;                                   //Объявление указателеля для пробела
	ptr2 = &str[0];
	a = strlen(str);
	ptr = &str[a];
	str[0] =' ';
	while ((ptr-- != ptr2) && (s != 3))
	{
		if ((*(ptr + 1) > 'A' && *(ptr + 1) < 'Z') || (*(ptr + 1) > 'a' && *(ptr + 1) < 'z'))
		{
			if ((*ptr++ == ' ') && (s > 0)) // || ((*ptr == str[0]) && (s == 0)))
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

#include "main.h"

/**
* * cap_string - Capitalizes all inputs
* @l: is variable holding string to be capitalized
* Return: l
*/
char *cap_string(char *l)
{
	char car[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	int len = 13;
	int a = 0, i;

	while (l[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || l[a - 1] == car[i]) && (l[a] >= 97 && l[a] >= 122))
				l[a] = l[a] - 32;
			i++;
		}
		a++;
	}
	return (l);
}

#include "main.h"

/**
* *string_toupper - changes lowercase letters of a string to upercase
* Return: nothing on success
* @u: string to be converted to uppercase
*/
char *string_toupper(char *u)
{
	int i = 0;

	while (u[i])
	{
		if (u[i] >= 97 && u[i] <= 122)
			u[i] = u[i] - 32;
		i++;
	}
	return (u);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplication of two numbers passed to it
* @argc: counts num of arguments passed to program
* @argv: holds arguments passed to programme in string format
* Return: onsuccess 0
*/
int main(int argc, char *argv[])
{
	int i;
	int j = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			j = j * atoi(argv[i]);
		}
		printf("%i\n", j);
	}
	return (0);
}

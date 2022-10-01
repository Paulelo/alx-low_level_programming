#include <stdio.h>

/**
* main - prints out all arguments it recives
* @argc: counts all arguments passed to main
* @argv: hold all arguments passed to main string format
* Return: on success 0
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

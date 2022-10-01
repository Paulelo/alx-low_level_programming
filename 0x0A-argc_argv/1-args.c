#include <stdio.h>

/**
* main - prints outs arguments passed to it
* @argc: counts argument
* @argv: array that holds argument stings
* Return: on success 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>

/**
* main - prints the programe name
* @argc: is variable tgat holds the number of argument passed
* @argv: is an array containing the argument
* Return: on success 0
*/
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

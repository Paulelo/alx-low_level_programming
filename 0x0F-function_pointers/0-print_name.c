#include "function_pointers.h"

/**
* print_name - print text pointed to by name
* @name: is pointer to text
* @f: is parameter of second function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	char **point;

	point = &name;
	(*f)(*point);
}


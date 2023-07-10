#include "main.h"
int _strlen(char *c)
{
	if (!c)
		return (0);
	return (_strlen(c + 1));
}

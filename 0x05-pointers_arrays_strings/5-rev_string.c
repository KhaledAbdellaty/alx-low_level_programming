#include"main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int length = 0;
	int i,last_index;
	char tmp;

	while (s[length] != '\0')
	{
		length++;
	}
	last_index = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[last_index];
		s[last_index--] = tmp;
	}
}

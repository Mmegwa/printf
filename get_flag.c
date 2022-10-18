#include "main.h"

/**
 * get_flag - turns on flag if _printf finds flag modifier in format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn on flags
 *
 * Return: 1 of a flag, 0 if otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}

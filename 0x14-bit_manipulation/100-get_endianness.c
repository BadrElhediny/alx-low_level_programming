#include "main.h"

/**
 * Description -  function that checks the endianness.
 *
 *Return:0 if big , 1 if little.
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}

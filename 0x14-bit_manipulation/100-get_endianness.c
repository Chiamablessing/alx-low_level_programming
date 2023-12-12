#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 0x76543210;
	char *ptr = (char *) &num;

	return (*ptr == 0x10 ? 1 : 0);
}

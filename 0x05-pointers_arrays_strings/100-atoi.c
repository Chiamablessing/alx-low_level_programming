#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * int _atoi - converts string to int
 * @s: pointer variable of type int
 */

int _atoi(char *s)
{
<<<<<<< HEAD
	int j, num,int len = (strlen(s)), char res [9];

	for (j = 0; j < len; j++)
	{
		flag = 1
		if (flag == 1 && str[j] < '0' && str[j] > '9')
			printf ("%d", str[j]);
		if (str[j - 1]== '-' )
			printf("%d", str[j - 1]);
			
		printf("/n");
=======
	int num = 0;

	while (*s != '\0')
	{
		num = num * 10 + (*s - '0');
		s++;
>>>>>>> f6d7ea21c97fd737b7e951d2ae8fabcd92e7d63a
	}
	return (num);
}

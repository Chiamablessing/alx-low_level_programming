#include "main.h"
/**
 * main - entry point in c programming
 * @argc: holds the size of arguments passed in terminal
 * @argv: holds tht arguments passed in terminal
 * Return: always 0
 */


int main(int argc, char *argv[])
{
	int indx;

	for (indx = 0; indx < argc; indx++)
	{
		printf("%s\n", argv[indx]);
	}
	return (0);
}


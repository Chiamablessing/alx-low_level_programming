#include "main.h"
/**
 * main - entry point in c programming
 * @argc: holds the size of arguments passed in terminal
 * @argv: holds tht arguments passed in terminal
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}

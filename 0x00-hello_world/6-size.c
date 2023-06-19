#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (indicating successful execution)
*/
int main(void)
{
char a;
int b;
long c;
long long int d;
float e;
printf("Size of char: %lu byte(s)\n",(unsigned long) sizeof(a));
printf("Size of int: %lu byte(s)\n",(unsigned long) sizeof(b));
printf("Size of long: %lu byte(s)\n",(unsigned long) sizeof(c));
printf("Size of long long int: %lu byte(s)\n",(unsigned long) sizeof(d));
printf("Size of float: %lu byte(s)\n",(unsigned long) sizeof(e));
return (0);
}

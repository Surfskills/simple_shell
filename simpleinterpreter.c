#include <stdio.h>
/**
  * main - print the program
  * @void: takes no argument from the user
  * return: 0 - sucess
  **/
int main(void)
{
	char c;

	while ((c = getchar) != '\n')
	{
		putchar(c);
	}
	printf("\n");
	return (0);
}

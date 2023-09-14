#include "main.h"
#include <stdio.h>
/**
 *  print_most_numbers - print numbers
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{	
		if (i != '2' && i != '4')
			putchar(i);
		i++;
	}
	putchar('\n');
}

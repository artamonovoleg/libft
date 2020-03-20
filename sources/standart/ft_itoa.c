#include "libft.h"
char * itoa(int input)
{
	int count = 0;
	for(int i = input; i != 0;)
	{
		i /=10;
		count++;
	}
	char * p = malloc(sizeof(char) * (count + 1));
	p[count] = '\0';
	for(; count  > 0; count--)
	{
		p[count - 1] = input % 10 + '0';
		input /=10;
	}
	return p;
}

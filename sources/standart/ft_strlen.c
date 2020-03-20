#include "libft.h"
int ft_strlen(char *input)
{
	int result = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		result++;
	}
	return result;
}

#include "libft.h"
void ft_printf(char *input,...)
{
	va_list args;
	va_start (args, input);
		for(int i = 0; i < ft_strlen(input); i++)
		{
			if(*(input + i) != '%')
			{
				write(1, input + i, 1);	
			}
			else
			{
				char * buf = itoa(va_arg(args, int));
				write(1, buf,ft_strlen(buf));
				free(buf);
				i++;
			}
		}
	va_end (args);
}

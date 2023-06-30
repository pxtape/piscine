#include "ft.h"

char	*ft_getline(char *dest, char *str)
{
	char	*start;

	while (*str && *str != '\n')
	{
		
		str++;
		dest++;
	}
	return (str);
}

char	*check_format(char *str, char *endofLine)
{
	
}
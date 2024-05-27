#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	char	*s;
	if (!num || !size)
	{
		num = 1;
		size = 1;
	}
	s = malloc(sizeof (num * size) + 1);
	if (!s)
		return (NULL);
	ft_bzero(s, (num * size));
	return (s);
}
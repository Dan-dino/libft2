#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str++ == (unsigned char) c)
			return ((void *) str);
	}
	return (NULL);
}
int main()
{
	unsigned char str[] = "this is a string";
	char *b;

	b = ft_memchr(str, 'a', 17);
	printf("%s\n", b);
}
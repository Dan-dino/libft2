#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle || needle[0] == '\0')
		return((char *)haystack);
	while(haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				if (needle [j] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	const char	str[] = "this is a string";
	const char	s[] = "a string";

	printf("%s\n", ft_strnstr(str, s, 4));
}
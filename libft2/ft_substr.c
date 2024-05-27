#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	sub = malloc(sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len +1);
	sub[len] = '\0';
	return (sub);
}

int	main(void)
{
	char	s[] = "this is a string";

	printf("%s\n", ft_substr(s, 10, 3));
}
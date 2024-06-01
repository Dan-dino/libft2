#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s);
	j = -1;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (s[++j] != '\0')
		str[j] = (*f)(j, s[j]);
	str[j] = '\0';
	return (str);
}

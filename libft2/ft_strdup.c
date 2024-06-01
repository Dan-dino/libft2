#include "libft.h"

char	*strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = -1;
	str = malloc(sizeof (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (str[++i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}

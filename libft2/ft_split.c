#include "libft.h"

static size_t	wordcount(char const *str, char del)
{
	size_t	count;
	size_t	i;

	i = 1;
	count = 0;
	if (str[i - 1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] == del && str[i - 1] != del)
			|| (str[i]) != del && str[i + 1] == '\0')
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		count;
	size_t		i;
	char const	*temp;

	temp = s;
	count = wordcount(s, c);
	i = 0;
	str = malloc(sizeof (char *) * (count + 1));
	if (!str)
		return (NULL);
	while (i < count)
	{
		str[i] = c;
	}
}

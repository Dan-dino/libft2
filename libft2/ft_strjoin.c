#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcpy(str + ft_strlen(s1) + 1, s2, ft_strlen(s2) + 1);
	return (str);	
}

// int	main(void)
// {
// 	char	s1[] = "this is";
// 	char	s2[] = " a string";

// 	printf("%s\n", ft_strjoin(s1,s2));
// }
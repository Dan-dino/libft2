#include "libft.h"
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t			i;
    unsigned char	*str1;
    unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    if(n == 0)
        return (0);
    while((str1[i] == str2[i]) && (str1[i] != '\0' && str2[i] != '\0') && i < n)
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	const char	str1[] = "abck";
	const char	str2[] = "abce";

	printf("%d\n", ft_strncmp(str1, str2, 7));
}
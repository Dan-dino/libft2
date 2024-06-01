/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:01:35 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:15:28 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	wordcount(char *s, char del)
// {
// 	size_t	count;
// 	size_t	i;

// 	count = 0;
// 	while ((s[i] == del && s[i - 1] != del)
// 			|| (s[i] != del && s[i + 1] == '\0'))
// }
static size_t	wordcount(char const *s, char del)
{
	size_t count = 0;
	size_t i = 0;

	while(s[i])
	{
		while (s[i] && s[i] != del)
		{
			if (s[i + 1] == del || s[i + 1] == '\0')
				count++;
			i++;
		}
			if (s[i] == '\0')
				break;
		i++;
	}
	return (count);
}

char	**words(char **str,char const *s, char del)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == del)
			i++;
		j = i;
		while (s[i] != del && s[i] != '\0')
			i++;
		if (j < i)
			str[k++] = ft_substr(s, j, i - j);
		}
	str[k] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	// size_t	i;

	count = wordcount(s, c);
	str = malloc(sizeof (char *) * count + 1);
	// i = -1;
	if (!str)
		return(NULL);
	return(words(str ,s , c));
}

int main()
{	
    int i = 0;
    char const *str = ",,Helloo,,,,,world,,,,";
    char **result = ft_split(str, ',');
    while (result[i])
    {
        printf("%s\n",result[i]);
        i++;
    }
    printf("Word count = %zu \n", wordcount(str, ','));
}
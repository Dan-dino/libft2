/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:01:35 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/03 13:28:35 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char del)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!*s)
		return (0);
	while (s[i] == del)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == del && s[i - 1] != del)
			|| (s[i] != del && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**freedom(char **arr, size_t k)
{
	while (k--)
		free (arr[k]);
	free (arr);
	return (NULL);
}

char	**words(char **str, char const *s, char del)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == del)
			i++;
		j = i;
		while (s[i] != del && s[i] != '\0')
			i++;
		if (j < i)
		{
			str[k++] = ft_substr(s, j, i - j);
			if (!str[k - 1])
				return (freedom(str, k));
		}
	}
	str[k] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;

	count = wordcount(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	return (words(str, s, c));
}

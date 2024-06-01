/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:24:01 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:24:02 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && check(set, s1[i]))
		i++;
	while (j > i && check(set, s1[j]))
		j--;
	s = malloc(sizeof(char *) * (j - i + 1));
	if (!s)
		return (NULL);
	while (i <= j)
	{
		s[k] = s1[i];
		k++;
		i++;
	}
	s[k] = '\0';
	return (s);
}

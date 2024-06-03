/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:23:57 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/03 11:06:28 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (!needle || needle[0] == '\0')
// 		return ((char *)haystack);
// 	while (haystack[i] != '\0' && i < n)
// 	{
// 		if (haystack[i] == needle[j])
// 		{
// 			while (haystack[i + j] == needle[j])
// 			{
// 				if (needle [j] == '\0')
// 					return ((char *)haystack + i);
// 				j++;
// 			}
// 			j = 0;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[++i] && len > i)
	{
		if (ft_strncmp(haystack + i, needle, j) == 0
			&& j + i <= len)
			return ((char *)haystack + i);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:01:31 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/03 10:59:16 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t	i;

// 	i = ft_strlen(s);
// 	if (!s)
// 		return (NULL);
// 	while (s[i] != (char) c)
// 	{
// 		if (s[i] == '\0')
// 			return (NULL);
// 		i--;
// 	}
// 	return ((char *)s + i);
// }

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((unsigned char) c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

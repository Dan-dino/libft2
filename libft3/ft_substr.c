/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:24:02 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/02 10:17:48 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
	{
		sub = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, ft_strlen(s) - start + 1);
	}
	else
	{
		sub = malloc(sizeof(char) * len + 1);
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, len + 1);
	}
	return (sub);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:44:39 by daalhosa          #+#    #+#             */
/*   Updated: 2024/05/18 13:29:12 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d == NULL || s == NULL)
		return (NULL);
	if (d < s)
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (++i <= len)
			d[i] = s[i];
	}
	return (dst);
}

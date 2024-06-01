/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:54:52 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:49:52 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(src);
	if (!dst || !src || dstsize == 0)
		return (len);
	if (dstsize - 1 > 0)
	{
		while (++i < dstsize - 1 && src[i] != '\0')
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (len);
}

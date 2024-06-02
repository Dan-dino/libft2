/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:54:52 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/02 09:44:47 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (!dst || !src || dstsize == 0)
		return (ft_strlen(src));
	while (++i < dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

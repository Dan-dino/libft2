/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:21:26 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/02 12:18:55 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = -1;
	if (!dstsize || i > dstsize)
		return (ft_strlen(src) + i);
	while (i + j < dstsize - 1 && src[++j])
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}

// int main ()
// {
// 	char str[] = "abcdefg";
// 	char str2[] = "hijklmnop";
// 	ft_strlcat(str, str2, 22);
// 	printf("%s\n", str);
// }
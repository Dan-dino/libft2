/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:54:52 by daalhosa          #+#    #+#             */
/*   Updated: 2024/04/28 12:43:23 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
// {
// 	size_t	i;

// 	i = ft_strlen(src);
// 	if (dstsize > 0)
// 	{
// 		dst[dstsize] = '\0';
// 		dstsize--;
// 		while (dstsize && src[dstsize] != '\0')
// 		{
// 			dst[dstsize] = src[dstsize];
// 			dstsize--;
// 		}
// 	}
// 	return (i);
// }

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!dstsize)
		return (len);
}

int	main(void)
{
	char	*dst;
	char	*src;

	dst = "this is a string";
	src = "another string";
	ft_strlcpy(dst, src, 9);
	printf("%s", dst);
}

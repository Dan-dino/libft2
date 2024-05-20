/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:54:52 by daalhosa          #+#    #+#             */
/*   Updated: 2024/05/20 11:35:43 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (++i < dstsize && src[i] != '\0')
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (len);
}

int	main(void)
{
	char	dst[] = "abcdefgh";
	char	src[] = "hijklmnop";

	ft_strlcpy(dst, src, 8);
	printf("%s\n", dst);
}

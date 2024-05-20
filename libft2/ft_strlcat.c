/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:21:26 by daalhosa          #+#    #+#             */
/*   Updated: 2024/05/20 12:51:45 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize > 0)
	{
		while (++j < dstsize || src[j] != '\0')
			dst[i + j] = src[j];
	}
	dst[j] = '\0';
	return (j);
}

int	main(void)
{
	char	str[] = "abcdefg";
	char	str2[] = "hijklmnop";
	strlcat(str2, str, 8);
	printf("%s", str);
}

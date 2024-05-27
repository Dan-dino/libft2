/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:21:26 by daalhosa          #+#    #+#             */
/*   Updated: 2024/04/29 10:43:03 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst) + 1;
	j = 0;
	if (dstsize > 0)
	{
		while (j < dstsize && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (ft_strlen(src) + i);
}

int main(void)
{
	char str[] = "string";
	char str2[] = "this is a ";

	ft_strlcat(str2, str, 7);
	printf("%s\n", str2);
}


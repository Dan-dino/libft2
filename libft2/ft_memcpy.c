/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:51:17 by daalhosa          #+#    #+#             */
/*   Updated: 2024/04/28 11:45:07 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d == NULL || s == NULL)
		return (NULL);
	while (n)
	{
		d[n] = s[n];
		n--;
	}
	return (dst);
}

int	main(void)
{
	char	*str;
	char	*str2;

	str = "this is a string";
	str2 = "idk what this is";
	memcpy(str2, str, 3);
	printf("%s/n", str2);
}

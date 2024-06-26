/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:40:15 by daalhosa          #+#    #+#             */
/*   Updated: 2024/05/18 13:14:37 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *)s;
	n++;
	while (--n)
	{
		a[n] = '\0';
	}
}

int	main(void)
{
	char	str[] = "this is a string";

	printf("%s\n", ft_bzero(str, 5));
}

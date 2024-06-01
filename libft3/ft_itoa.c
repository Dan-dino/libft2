/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:22:47 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:22:48 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digits(int n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = digits(n);
	str = malloc (sizeof(char *) * (i + 1));
	if (n < 0)
	{
		i++;
		str[0] = '-';
	}
	n = abs(n);
	str[i] = '\0';
	while (n)
	{
		str [i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}

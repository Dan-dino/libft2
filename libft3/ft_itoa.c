/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:22:47 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/03 11:44:46 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits(int n)
{
	int	i;

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
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		i++;
	str = malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
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

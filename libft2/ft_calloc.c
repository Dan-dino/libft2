/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:22:41 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:22:42 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	char	*s;

	if (!num || !size)
	{
		num = 1;
		size = 1;
	}
	s = malloc(sizeof (num * size) + 1);
	if (!s)
		return (NULL);
	ft_bzero(s, (num * size));
	return (s);
}

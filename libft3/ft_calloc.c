/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:22:41 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/02 07:33:02 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*s;

	if (size && num > SIZE_MAX / size)
		return (NULL);
	s = malloc(num * size);
	if (!s)
		return (NULL);
	ft_bzero(s, (num * size));
	return (s);
}

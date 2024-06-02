/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:23:10 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/02 09:47:38 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = -1;
	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, (ft_strlen(s) + 1));
	return (str);
}

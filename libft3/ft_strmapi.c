/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:23:54 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:23:55 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s);
	j = -1;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (s[++j] != '\0')
		str[j] = (*f)(j, s[j]);
	str[j] = '\0';
	return (str);
}

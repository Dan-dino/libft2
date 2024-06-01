/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:24:02 by daalhosa          #+#    #+#             */
/*   Updated: 2024/06/01 17:24:03 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

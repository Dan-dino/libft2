/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:48:02 by daalhosa          #+#    #+#             */
/*   Updated: 2024/04/24 07:57:52 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}
#include <stdio.h>
int main ()
{
	// if(ft_isdigit('2'))
	// {
	// 	printf("welcome back dana\n");
	// }
	// else
	// 	printf("my bad\n");
 #include <ctype.h>
	if(isdigit("10"))
	{
		printf("original: welcome back dana\n");
	}
	else
		printf("orignial: my bad\n");

	if(ft_isdigit("10"))
	{
		printf("danas: welcome back dana\n");
	}
	else
		printf("danas: my bad\n");	
}	
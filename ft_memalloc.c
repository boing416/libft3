/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:37:23 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 18:03:29 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(str) * size);
	if (str != NULL)
	{
		i = 0;
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}

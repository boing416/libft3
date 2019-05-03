/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:00:59 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 18:09:49 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*r;
	unsigned int	i;

	if (!f || !s)
		return (0);
	r = ft_strdup(s);
	if (!r)
		return (0);
	i = 0;
	while (s[i])
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}

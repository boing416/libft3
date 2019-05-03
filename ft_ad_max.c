/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ad_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:58:44 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 17:58:46 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ad_max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				reslt;

	reslt = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > reslt)
			reslt = tab[i];
		i++;
	}
	return (reslt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:48 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 10:06:51 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	f = (char *)malloc(sizeof(char) * (len + 1));
	if (!f)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		f[i++] = s[start++];
	}
	f[i] = '\0';
	return (f);
}

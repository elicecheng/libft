/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:39:47 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:40:12 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*str;
	char	*res;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (size + 1));
		if (!str)
			return (NULL);
		res = str;
		while (*s1)
		{
			*str++ = *s1++;
		}
		while (*s2)
		{
			*str++ = *s2++;
		}
		*str = '\0';
		return (res);
	}
	return (NULL);
}

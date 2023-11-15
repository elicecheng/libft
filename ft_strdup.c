/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:02:30 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:02:32 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1); 
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	return ((char *)ft_memcpy(str, s1, (len + 1)));
}

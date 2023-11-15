/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:57 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 14:39:58 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	if (*needle == '\0')
	{
		return (((char *)haystack));
	}
	i = 0;
	n_len = ft_strlen(needle);
	while (haystack[i] && i + n_len <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

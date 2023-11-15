/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:38:55 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:39:32 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;

	str_len = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (str_len < len)
		len = str_len;
	if (start > str_len)
		return (ft_strdup(""));
	if (str_len - start >= len)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (str_len - start + 1));
	if (!str)
		return (NULL);
	*str = '\0';
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:41:24 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:41:43 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
	{
		return (0);
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
		{
			count++;
		}
		while (*s != c && *s)
		{
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	word_len;
	int		i;

	list = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!s || !list)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			list[i] = ft_substr(s, 0, word_len);
			i++;
			s += word_len;
		}
	}
	list[i] = NULL;
	return (list);
}
/*
int	main(void)
{
	char *str = "Hello,world,this,is,a,test";
	char **result = ft_split(str, ',');

	if (result)
	{
		int i = 0;
		while (result[i])
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			i++;
		}

		// Free the memory allocated for the split strings
		i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Failed to split the string.\n");
	}

	return 0;
}*/
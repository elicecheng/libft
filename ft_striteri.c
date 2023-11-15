/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:43:10 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:43:30 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(s);
	if (s != NULL)
	{
		while (i < size)
		{
			(*f)(i, (s + i));
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:42:28 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/11 18:56:19 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int i;

	i = 'a';
	if(ft_isalpha(i))
	{
		printf("i is an alpha");
	}
	else
	{
		printf("i is not an alpha");
	}
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:41:55 by jucheng           #+#    #+#             */
/*   Updated: 2023/07/15 16:42:15 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int				size;
	char			*str;
	unsigned int	nbr;

	nbr = n;
	size = ft_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int number = -10;
	char *str;

	str = ft_itoa(number);
	if (str)
	{
		printf("Number: %d\n", number);
		printf("String: %s\n", str);
		free(str);
	}
	else
	{
		printf("Failed to allocate memory.\n");
	}

	return 0;
}*/
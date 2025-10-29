/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:19:38 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/29 11:46:19 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int print_hex(unsigned long n, char x)
{
	unsigned long number;
	int i;
	
	number = n;
	i = 0;
	while(number)
	{
		number /= 10;
		ft_putchar_fd(n, x);
		i++;
	}
	return (i);
}

int num_length(int n)
{
	int		length;
	long	nb;

	nb = n;
	length = 0;
	if (nb <= 0)
	{
		length++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

void ft_putunsignedint_fd(unsigned int u, int fd)
{
	if (u > 9)
	{
		ft_putunsignedint_fd(u / 10, fd);
	}
	ft_putchar_fd(u % 10 + '0', fd);
}
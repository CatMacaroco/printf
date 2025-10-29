/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:19:38 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/29 17:58:28 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int print_hex(unsigned long n, char x)
{
	int count;
	char digit;

	count = 0;
	if (n >= 16)
		count = count + print_hex(n / 16, x);
	unsigned long remainder = n % 16;
	if (remainder < 10)
		digit = remainder + '0';
	else
		digit = remainder - 10 + (x == 'X' ? 'A' : 'a');
	
	ft_putchar_fd(digit, 1);
	count++;
	return (count);
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

int unsigned_num_length(unsigned int n)
{
	int		length;
	
	length = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
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
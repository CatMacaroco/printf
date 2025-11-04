/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorten1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:33:42 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/11/04 12:44:44 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	print_int(int d)
{
	ft_putnbr_fd(d, 1);
	return (num_length(d));
}

int	print_string(char *s)
{
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	print_unsigneddecimal(unsigned int u)
{
	ft_putunsignedint_fd(u, 1);
	return (unsigned_num_length(u));
}

int	print_pointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
	{
		write (1, "(nil)", 5);
		count += 5;
	}
	else
	{
		write(1, "0x", 2);
		count += 2;
		count += print_hex((unsigned long)p, 'x');
	}
	return (count);
}

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

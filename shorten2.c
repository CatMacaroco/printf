/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shorten2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:33:35 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/11/04 12:44:18 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

// int print_else()
// {
// 	write(1, "%", 1);
// 	write(1, &format[i], 1);
// }

int	handle_format_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char((char)va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_int(va_arg(args, int)));
	else if (specifier == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (specifier == 'u')
		return (print_unsigneddecimal(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (print_hex(va_arg(args, unsigned int), 'x'));
	else if (specifier == 'X')
		return (print_hex(va_arg(args, unsigned int), 'X'));
	else if (specifier == '%')
		return (write(1, "%", 1));
	else
		return (write(1, "%", 1) + write(1, &specifier, 1));
}

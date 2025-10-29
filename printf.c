/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:15:46 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/29 12:16:14 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// const char *format is the mandatory argument of printf
int ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	i = 0;
	count = 0;
	va_start(args, format);
	
	while (format[i] != '\0')
	{
		if(format[i] == '%')
		{
			i++;
			if(format[i] == 'c')
			{
				char c = (char)va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if(format[i] == 's')
			{
				char *s = va_arg(args, char *);
				if (!s)
					s = "(null)";
				ft_putstr_fd(s, 1);
				count = count + ft_strlen(s);
			}
			else if(format[i] == 'd' || format[i] == 'i')
			{
				int d = va_arg(args, int);
				ft_putnbr_fd(d, 1);
				count += num_length(d);
			}
			else if (format[i] == 'p')
			{
				void *p = va_arg(args, void *);
				if (!p)
					write (1, "0x0", 3);
				count += 3;
				count += print_hex((unsigned long)p, 'x');
			}
			else if (format[i] == 'u')
			{
				unsigned int u = (va_arg(args, unsigned int));
				ft_putunsignedint_fd(u, 1);
				count += num_length(u);
			}
			else if (format[i] == 'x')
				count += print_hex(va_arg(args, unsigned int), 'x');
			else if (format[i] == 'X')
				count += print_hex(va_arg(args, unsigned int), 'X');
			else if (format[i] == '%')
				count += write(1, "%", 1);
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}


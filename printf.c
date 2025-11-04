/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:15:46 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/11/04 12:52:31 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// const char *format is the mandatory argument of printf
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format_specifier(format[i], args);
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

//If you want to check what value the function returns, 
// you can do a printf of your printf
// int main(void)
// {
//     int result = ft_printf("Sentence to know how many %s\n", 
//     "characters were written");
//     ft_printf("%d characters were written\n", result);
//     ft_printf("%p\n", NULL);
// }
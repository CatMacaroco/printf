/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:15:46 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/30 14:26:53 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #ifndef LIBFT_H
// # define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_hex(unsigned long n, char x);
int		num_length(int n);
void	ft_putunsignedint_fd(unsigned int u, int fd);
int		handle_format_specifier(char specifier, va_list args);
int		print_int(int d);
int		print_string(char *s);
int		print_unsigneddecimal(unsigned int u);
int		print_pointer(void *p);
int		print_char(char c);
int		print_else(void);
int		unsigned_num_length(unsigned int n);

// #endif
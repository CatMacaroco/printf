/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfheader.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:15:46 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/29 11:25:39 by cmacaroc         ###   ########.fr       */
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

// #endif
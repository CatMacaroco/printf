/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:24:49 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 11:28:23 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//erases the data in n bytes of memory starting at the locatoin 
//pointed to by s, changes allocated memory to '\0'
void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		(*(unsigned char *)s) = '\0';
		s++;
		n--;
	}
}

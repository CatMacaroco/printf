/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:25:14 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 11:51:09 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//scans the initial n bytes of the mem pointed to by s for 
//the first instance of c. both c and the bytes of mem pointed 
//to by s are interpreted as unsigned char. returns the pointer to that mem
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	int c = 'l';
// 	const char s[] = "alloca";
// 	printf("%s", (char *)ft_memchr(s, c, 8));
// 	return (0);
// }
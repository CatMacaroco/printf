/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:38:55 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 12:00:30 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares s1 to s2 in the first n bytes. stops when a difference is found
//return the difference between the bytes
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	i = 0;
	first = (const unsigned char *)s1;
	second = (const unsigned char *)s2;
	while (i < n)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char s1[] = "allo";
//     char s2[] = "zdlo";
//     printf("%d", ft_memcmp(s1, s2, 7));
//     return (0);
// }
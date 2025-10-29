/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:25:16 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 12:17:35 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//fills the first n bytes of mem area pointed to by s with the constant byte c
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (n > 0)
	{
		*buf = (unsigned char)c;
		n--;
		buf++;
	}
	return (s);
}

// int main(void)
// {
// 	char s[10];
// 	ft_memset(s, 'A', 5);
// 	s[5] = '\0';
// 	printf("%s\n", s);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:15 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 15:41:19 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares strings and stops when it finds a letter that’s different, has
//checked n letter already or reaches the end of one string
//if the first letter that doesn’t match in the first word is “bigger” in
//alphabetical order (like 't' is bigger than 'r') it returns a positive number
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && first[i] && second[i])
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (first[i] - second[i]);
}

// int main(void)
// {
//     const char s1[] = "bla";
//     const char s2[] = "bleggttg";
//     printf("%d", ft_strncmp(s1, s2, 5));
//     return(0);
// }
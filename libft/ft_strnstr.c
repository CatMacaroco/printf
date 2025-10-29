/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:04:58 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 16:01:56 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//locates the first occurrence of string little in string big
//find needle in haystack but only up to n chars len
//stops either when the needle is found or when len characters are searched
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (i <= len - little_len && big[i] != '\0')
	{
		j = 0;
		while (j < little_len && i + j < len && big[i + j] == little[j])
		{
			j++;
		}
		if (j == little_len)
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     const char big[] = "alylyaaaaa";
//     const char little[] = "ya";
//     printf("%s", ft_strnstr(big, little, 5));
//     return (0);
// }
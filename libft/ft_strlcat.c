/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:58:03 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 15:13:59 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concatenates string src to the end of string dest, resulting in dest+src
//size is the total size of dest buffer + '\0'
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;
	size_t	tofill;

	dstlen = ft_strlen(dst);
	i = 0;
	if (size > 0 && dstlen < size)
	{
		tofill = size - dstlen - 1;
		while (i < tofill && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}

// int main (void)
// {
//     char dst[8] = "allo";
//     const char src[] = "ess";
//     int result = ft_strlcat(dst, src, 19);
//     printf("%d", result);
//     return (0);
// }
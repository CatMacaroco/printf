/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:41:53 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 15:59:36 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocates memory for an array of nmemb elements of size bytes each
//& returns a pointer to the allocated memory. the memory is set to 0.
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	i = 0;
	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// int main(void)
// {
//     size_t numbof_squares = 9;
//     size_t size = 4;
//     printf("%p", ft_calloc(numbof_squares, size));
//     return (0);
// }
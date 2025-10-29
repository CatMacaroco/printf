/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:41:28 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 12:23:24 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//writes a string to the file descriptor fd
//and adds a new line after the string
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

// int main(void)
// {
// 	char s[] = "allo";
// 	ft_putendl_fd(s, 1);
// 	return (0);
// }
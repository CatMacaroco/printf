/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:34:51 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 12:38:34 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//it prints the string s to the file descriptor fd that you specify
//1 for std output, 2 for std error
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

// int main(void)
// {
// 	char s[] = "allo";
// 	ft_putstr_fd(s, 1);
// 	return (0);
// }
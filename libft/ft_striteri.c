/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:46:32 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 15:33:49 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//applies function f to each char of string s, passing its index to first arg
//each char is passed by address& to 'f' so it can be modified if needed
//f* lets you access or modify the value that the pointer points to
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void capitalize (unsigned int i, char *s)
// {
// 	if ( i % 2 == 0 && *s >= 'a' && *s <= 'z')
// 		*s = *s - 32;
// }

// int main(void)
// {
// 	char s[] = "akki";
// 	ft_striteri(s, capitalize);
// 	printf("%s", s);
//     return (0);
// }
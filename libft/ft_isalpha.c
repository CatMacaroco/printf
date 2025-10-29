/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:25:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 11:32:56 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//checks for an alphabetic char
//returns non zero if char is alpha or 0 if not
int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     int c = 9;
//     printf("%d", ft_isalpha(c));
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:24:58 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 11:32:08 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//checks for an alphanumeric char. equivalent to isalpha/isdigit
//returns non zero if char is alphanum or 0 if not
int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     int c = '9';
//     printf("%d", ft_isalnum(c));
//     return (0);
// }
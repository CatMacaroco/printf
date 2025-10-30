/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:36:11 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 17:27:07 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_length(int n)
{
	int		length;
	long	nb;

	nb = n;
	length = 0;
	if (nb <= 0)
	{
		length++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

//Allocates memory and returns
//a string representing the integer received as an
//argument. Negative numbers must be handled
char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	nbr;

	nbr = n;
	length = num_length(n);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--length] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

// int main(void)
// {
//     //int n = -2147483648;
// 	int n = -3648;
//     printf("%s\n", ft_itoa(n));
//     return (0);
// }

// if (n == -2147483648)
	// {
	// 	ft_strlcpy (str, "-2147483648", 12);
	// 	return (str);
	// }
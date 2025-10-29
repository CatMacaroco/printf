/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:15 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 15:33:35 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applies the function f to each character of the string s, passing its index
//as the first argument and the char itself as the second. A new string is 
//created to store the results from the successive applications of f
//f* lets you access or modify the value that the pointer points to
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//returns capital letters at even index numbers (0, 2, 4, 6...)
// char example (unsigned int i, char c)
// {
// 	if ( i % 2 == 0 && c>= 'a' && c <= 'z')
// 		return c - 32;
// 	return c;
// }

// int main (void)
// {
// 	char const s[] = "allsso";
// 	char *result = ft_strmapi(s, example);
// 	printf("%s", result);
// 	return (0);
// }
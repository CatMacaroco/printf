/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:20:13 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 16:49:02 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocate mem and returns a copy of ’s1’ with characters from ’set’ removed 
//from the beginning and the end.
char const	*ft_beginning(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (set[j] == '\0')
		{
			return (s1 + i);
		}
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
		{
			j++;
		}
	}
	return (s1 + i);
}

int	ft_endchop(char const *s1, char const *set)
{
	size_t	j;
	size_t	len;

	len = ft_strlen(s1);
	j = 0;
	while (len > 0)
	{
		if (set[j] == '\0')
		{
			return (len);
		}
		if (s1[len - 1] == set[j])
		{
			len--;
			j = 0;
		}
		else
		{
			j++;
		}
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	s1 = ft_beginning(s1, set);
	len = ft_endchop(s1, set);
	trimmed_str = malloc(sizeof(char) * (len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1, len + 1);
	return (trimmed_str);
}

// int main(void)
// {
//     char const s1[] = "...bop.bop.";
//     char const set[] = ".";
//     printf("%s", ft_strtrim(s1, set));
//     return(0);
// }
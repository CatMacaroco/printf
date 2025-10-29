/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 15:03:05 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory using malloc and returns a new node. 
// The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*things;

	things = (t_list *)malloc(sizeof(t_list));
	if (!things)
		return (NULL);
	things->content = content;
	things->next = NULL;
	return (things);
}

// int main(void)
// {
// 	t_list *things;
// 	things = ft_lstnew("123");
// 	printf("%s", (char *)(things->content));
// 	return (0); 
// }

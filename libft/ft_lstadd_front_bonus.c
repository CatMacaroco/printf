/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 16:07:49 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Adds the node ’new’ at the beginning of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *new;
// 	t_list **lst;
// 	t_list *node_1;
// 	lst = (t_list **)malloc(sizeof(t_list *));
// 	new = ft_lstnew("123");
// 	node_1 = ft_lstnew("abc");
// 	*lst = node_1;
// 	ft_lstadd_front(lst, new);
// 	printf("%s", (char *)((new->next)->content));
// 	return (0); 
// }
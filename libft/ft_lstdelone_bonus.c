/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:04:09 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 16:08:16 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//deletes the last node
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (lst != NULL)
	{
		del(lst->content);
		free (lst);
	}
}

// int main(void)
// {
// 	t_list *new;
// 	new = ft_lstnew("123");
// 	printf("%s", (char *)(new->content));
// 	return (0); 
// }
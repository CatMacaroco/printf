/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:05:57 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/29 12:19:11 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//If you want to check what value the function returns, you can do a printf of your printf
int main(void)
{
    int result = ft_printf("Sentence to know how many %s\n", "characters were written");
    
    ft_printf("%d characters were written", result);
}
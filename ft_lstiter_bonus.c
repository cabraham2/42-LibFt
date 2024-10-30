/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:31:26 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 02:33:55 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief This function calculates the factorial of a given number.
 *
 * @param n The number for which the factorial is to be calculated.
 * @return The factorial of the given number.
 *
 * This function uses a recursive approach to calculate the factorial.
 * If the input number is less than 0, 
 * the function returns -1 to indicate an error.
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

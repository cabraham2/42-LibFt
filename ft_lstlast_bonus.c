/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:22:19 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 02:33:43 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_lstlast_bonus.c
 * @brief Returns the last element of the list.
 *
 * This function traverses the linked list pointed to by `lst` and returns
 * the last element in the list.
 *
 * @param lst A pointer to the first element of the list.
 * @return A pointer to the last element of the 
 * list, or NULL if the list is empty.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

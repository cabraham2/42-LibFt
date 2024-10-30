/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:02 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 04:23:54 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Itère sur la liste 'lst' et applique la fonction 'f' à
 * chaque élément pour créer une nouvelle liste.
 * 
 * Paramètres :
 *   lst - La liste sur laquelle itérer.
 *   f - La fonction à appliquer à chaque élément.
 *   del - La fonction à appeler pour supprimer
 * le contenu d'un élément si nécessaire.
 * 
 * Retour :
 *   La nouvelle liste. NULL si l'allocation échoue.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

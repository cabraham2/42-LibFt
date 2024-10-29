/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:59:18 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 19:56:55 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

/* 
int main(void)
{
    int num = 42;
    t_list *element;

    // Créer un nouvel élément de liste avec un entier comme contenu
    element = ft_lstnew(&num);

    // Afficher le contenu de l'élément
    if (element)
        printf("Contenu de l'élément : %d\n", *(int *)element->content);
    else
        printf("Échec de l'allocation de l'élément de liste.\n");
    // Libérer la mémoire allouée pour l'élément
    free(element);
    return 0;
} */
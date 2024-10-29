/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:18 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:14:51 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tab;

	tab = (unsigned char *)b;
	while (len > 0)
	{
		*tab = (unsigned char)c;
		tab++;
		len--;
	}
	return (b);
}

/* 
int main(void)
{
    // Création d'un tableau de caractères de taille 10
    char arr[10];
    char autre[10];

    // Remplissage du tableau avec le caractère 'A' en utilisant ft_memset
    memset(arr, 'A', 10);
	ft_memset(autre, 'x', 20);

    // Ajout d'un caractère nul pour éviter des
	//problèmes d'affichage (pour les chaînes de caractères)
    arr[9] = '\0';  // En supposant que 10 caractères sont remplis

    // Affichage du tableau rempli
    printf("Contenu du tableau après memset : %s\n", arr);
    printf("Contenu du tableau après memset : %s\n", autre);

    return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:10:59 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:14:14 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;

	tab = (unsigned char *)s;
	while (n > 0)
	{
		*tab = 0;
		tab++;
		n--;
	}
}

/* 
int main(void)
{
    char buffer[10];
    char autre[20];

    // Remplir le tableau avec des données arbitraires
    for (int i = 0; i < 10; i++)
        buffer[i] = 'A';
    for (int i = 0; i < 20; i++)
        autre[i] = 'x';

    // Utilisation de bzero pour remplir avec des zéros
    bzero(buffer, 10);
    ft_bzero(autre, 10);

    // Affichage du contenu du buffer après bzero (les zéros ne s'affichent pas)
    for (int i = 0; i < 10; i++)
        printf("%d ", buffer[i]);  // Affiche des 0 pour chaque octet

	printf("\n");

    for (int i = 0; i < 20; i++)
        printf("%d ", autre[i]);  // Affiche des 0 pour chaque octet

    printf("\n");
    return 0;
} */
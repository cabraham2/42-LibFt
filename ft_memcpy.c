/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:14 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 04:28:34 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*test;
	unsigned char	*teste;

	test = (unsigned char *)dest;
	teste = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*test = *teste;
		teste++;
		test++;
		n--;
	}
	return (dest);
}

/* 
int main(void)
{
    char src[] = "Hella";
    char src1[] = "ça va";
    char dest[6];  // Un buffer pour stocker le résultat, +1 pour le '\0'
    char dest1[6];  // Un buffer pour stocker le résultat, +1 pour le '\0'

    // Utilisation de memcpy pour copier "Hello" dans dest
    memcpy(dest, src, 6);  // Copie 6 octets (y compris le '\0' final)
    ft_memcpy(dest1, src1, 3);  // Copie 6 octets (y compris le '\0' final)
	dest1[3] = '\0';
    // Affichage du contenu de dest
    printf("Contenu de dest après memcpy: %s\n", dest);
    printf("Contenu de dest après memcpy: %s\n", dest1);

    return 0;
} */
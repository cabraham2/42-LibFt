/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:17 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 21:58:48 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*nsuro(size_t n, unsigned char *destination, unsigned char *source)
{
	while (n > 0)
	{
		n--;
		destination[n] = source[n];
	}
	return (destination);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (destination > source && destination < source + n)
	{
		destination = nsuro(n, destination, source);
	}
	else
	{
		while (n > 0)
		{
			*destination = *source;
			source++;
			destination++;
			n--;
		}
	}
	return (dest);
}

/* 
int main(void)
{
    char src[] = "Hella\0";
    char src1[] = "ça va";
    char dest[6];  // Un buffer pour stocker le résultat, +1 pour le '\0'
    char dest1[6];  // Un buffer pour stocker le résultat, +1 pour le '\0'

    // Utilisation de memcpy pour copier "Hello" dans dest
    memmove(dest, src, 6);  // Copie 6 octets (y compris le '\0' final)
    ft_memmove(dest1, src1, 3);  // Copie 6 octets (y compris le '\0' final)
	//dest1[3] = '\0';
    // Affichage du contenu de dest
    printf("Contenu de dest après memcpy: %s\n", dest);
    printf("Contenu de dest après memcpy: %s\n", dest1);

	char str[] = "HelloWorld";
    
    // Utilisation de ft_memmove pour déplacer 
	//"Hello" à l'intérieur de la même chaîne
    ft_memmove(str + 5, str, 5);

    printf("Résultat après ft_memmove (chevauchement): %s\n", str);
	// Attendu: "HelloHello"
    
    return 0;

    return 0;
} */
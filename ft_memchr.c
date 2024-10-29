/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:09 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:15:06 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source1;
	unsigned char	element;

	source1 = (unsigned char *)s;
	element = (unsigned char)c;
	while (n > 0)
	{
		if (*source1 == element)
			return (source1);
		source1++;
		n--;
	}
	return (NULL);
}

/* 
int main(void)
{
    char str[] = "HelloWorld";
	char *resultat;

    // Rechercher le caractère 'W' dans la chaîne
    char *result = memchr(str, 'W', 10);
    resultat = ft_memchr(str, 'W', 10);

    if (result)
        printf("Le caractère 'W' a été trouvé à la
		//position : %ld\n", result - str);
    else
        printf("Le caractère 'W' n'a pas été trouvé\n");
	if (resultat)
        printf("Le caractère 'W' a été
		//trouvé à la position : %ld\n", result - str);
    else
        printf("Le caractère 'W' n'a pas été trouvé\n");

    // Rechercher le caractère 'Z' qui n'existe pas
    result = memchr(str, 'Z', 10);
    resultat = ft_memchr(str, 'Z', 10);

    if (result)
        printf("Le caractère 'Z' a été trouvé\n");
    else
        printf("Le caractère 'Z' n'a pas été trouvé\n");
	if (resultat)
        printf("Le caractère 'Z' a été trouvé\n");
    else
        printf("Le caractère 'Z' n'a pas été trouvé\n");

    return 0;
} */
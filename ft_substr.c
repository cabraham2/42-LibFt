/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:47:45 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 02:46:41 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_substr - Extrait une sous-chaîne d'une chaîne donnée.
 
 Cette fonction crée et renvoie une nouvelle chaîne, qui est
 une sous-chaîne de la chaîne 's'. La sous-chaîne commence
 à l'index 'start' et a une longueur maximale de 'len' caractères.
 
 * Paramètres :
    s     - La chaîne source à partir de laquelle extraire la sous-chaîne.
    start - L'index de départ dans la chaîne 's'.
    len   - La longueur maximale de la sous-chaîne à extraire.
 
 * Retour :
    La sous-chaîne extraite. Si 'start' dépasse la longueur de la chaîne 's',
    la fonction renvoie une chaîne vide. Si 's' est NULL ou si l'allocation
    échoue, la fonction renvoie NULL.
 */

#include "libft.h"

void	*startpluslongeur(char *newstring, char const *s, size_t x)
{
	newstring = malloc(1);
	if (!newstring || s == NULL)
		return (NULL);
	return (newstring[x] = '\0', newstring);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	char	*string;
	int		longeur;
	int		star;
	size_t	x;

	newstring = NULL;
	string = (char *)s;
	longeur = (len + start);
	star = start;
	x = 0;
	if (star >= ft_strlen(string))
		return (startpluslongeur(newstring, s, x));
	if (longeur > ft_strlen(string))
		len = ft_strlen(string) - start;
	newstring = malloc(len + 1);
	if (!newstring || s == NULL)
		return (NULL);
	while (len > 0)
	{
		newstring[x] = string[start + x];
		len--;
		x++;
	}
	return (newstring[x] = '\0', newstring);
}

/* 
int main(void)
{
    char str[] = "Hello, world!";
    char *result;

    // Extraire une sous-chaîne à partir de l'index 7, longueur 5
    result = ft_substr(str, 7, 5);  // Résultat attendu : "world"

    if (result)
    {
        printf("Sous-chaîne extraite: %s\n", result);
        free(result);  // Libérer la mémoire allouée pour la sous-chaîne
    }

    return 0;
}
 */
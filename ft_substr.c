/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:47:45 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/01 17:08:13 by clementabra      ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	k;

	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str || !s)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (i >= start && k < len)
		{
			sub_str[k] = s[i];
			k++;
		}
		i++;
	}
	sub_str[k] = '\0';
	return (sub_str);
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
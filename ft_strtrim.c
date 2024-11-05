/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:02:06 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 22:04:08 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Cette fonction prend un caractère 'c' et une chaîne de caractères 'set', et
 * renvoie 1 si le caractère est présent dans 'set', sinon elle renvoie 0.
 *
 * Paramètres :
 *   c   - Le caractère à vérifier.
 *   set - La chaîne contenant les caractères à comparer.
 *
 * Retour :
 *   1 si le caractère est dans 'set', sinon 0.
 */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	char	*s;

	s = (char *)s1;
	start = s;
	while (*start && ft_is_in_set(*start, set))
		start++;
	end = s + ft_strlen(s) - 1;
	while (end > start && ft_is_in_set(*end, set))
		end--;
	trimmed = ft_substr(start, 0, end - start + 1);
	return (trimmed);
}
/* 
int main(void)
{
    char *s1 = "  Hello, world!  ";
    char *set = " ";
    char *trimmed;

    trimmed = ft_strtrim(s1, set);
    printf("Chaîne nettoyée : '%s'\n", trimmed);
    free(trimmed);

    return 0;
} */
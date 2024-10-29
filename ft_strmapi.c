/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:05:37 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:15:51 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strmapi - Applique une fonction 'f' à chaque caractère d'une chaîne.
 * 
 * Cette fonction crée une nouvelle chaîne de caractères résultant de l'app
 * de la fonction 'f' à chaque caractère de la chaîne 's'. La fonction 'f' reçoit
 * l'index du caractère et le caractère lui-même.
 *
 * Paramètres :
 *   s - La chaîne de caractères source.
 *   f - La fonction à appliquer à chaque caractère.
 *
 * Retour :
 *   Une nouvelle chaîne avec les caractères modifiés, ou NULL en cas d'erreur.
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		taille;
	int		i;
	char	*c;

	i = 0;
	c = (char *)s;
	taille = ft_strlen(c);
	str = malloc(taille + 1);
	if (!str)
		return (NULL);
	while (i < taille)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[taille] = '\0';
	return (str);
}

/* 
char example_function(unsigned int i, char c)
{
	return c + i;
}

int main(void)
{
	char *result;
	char *source = "Hello, World!";
	
	result = ft_strmapi(source, example_function);
	if (result)
	{
		printf("Modified string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	
	return 0;
} */
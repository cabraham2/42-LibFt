/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:32:41 by cabraham          #+#    #+#             */
/*   Updated: 2024/11/06 15:12:51 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Alloue de la mémoire pour une sous-chaîne de `str` de longueur `len` 
// à partir de l'index `start` et retourne cette sous-chaîne.
static char	*malloc_tab(const char *str, int start, int len)
{
	char	*sub;

	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (char *)str + start, len + 1);
	return (sub);
}

// Compte le nombre de mots dans la chaîne `str`, en utilisant `del` 
// comme délimiteur pour identifier les séparations entre les mots.
static int	count_words(char const *str, char del)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == del)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != del)
			i++;
	}
	return (count);
}

// Alloue la mémoire pour le tableau principal de chaînes `tab` en fonction 
//du nombre de mots calculés dans str, ou crée un tableau vide si str est vide.
static char	**malloc_main_tab(char **tab, char const *str, char del)
{
	if (str[0] == '\0')
	{
		tab = malloc(1 * sizeof(char *));
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc(((count_words(str, del) + 1) * sizeof(char *)));
	if (!tab)
		return (NULL);
	return (tab);
}

// Remplit le tableau `tab` avec les mots extraits de `str` en utilisant `del` 
//comme séparateur ; return 1 si le remplissage est réussi, ifnot 0 en cas d'err
static int	fill_tab(char const *str, char del, char **tab)
{
	int		i;
	int		n;
	int		k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] == del)
			i++;
		while (str[i + n] != '\0' && str[i + n] != del)
			n++;
		if (n != 0)
			tab[k++] = malloc_tab(str, i, n);
		if ((k > 0 && tab[k - 1] == NULL) || !tab)
			return (0);
		i = i + n;
	}
	tab[k] = NULL;
	return (1);
}

// Fonct princip ft_split qui divise la chaîne s en un tableau de chaînes 
// en fonct du délimiteur c Gère l'allocation et la libération de la mémoire
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	tab = NULL;
	tab = malloc_main_tab(tab, s, c);
	if (!tab)
		return (NULL);
	if (fill_tab(s, c, tab) == 0)
	{
		while (tab[i] != NULL)
			free(tab[i++]);
		free(tab);
		return (NULL);
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:32:41 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/30 04:18:18 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_count_word(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

// Duplique une sous-chaîne de longueur n.
char	*ft_strdupn(const char *src, int n)
{
	char	*create;
	int		i;

	create = malloc((n + 1) * sizeof(char));
	if (!create)
		return (NULL);
	i = 0;
	while (i < n && src[i])
	{
		create[i] = src[i];
		i++;
	}
	create[i] = '\0';
	return (create);
}

// Fonction principale pour diviser la chaîne en fonction du séparateur.
char	**ft_split(char const *s, char c)
{
	char	**output;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	output = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			output[j++] = ft_strdupn(s + start, i - start);
	}
	output[j] = NULL;
	return (output);
}

/* int main() {
    char *str = "Hello, world! This is a test string.";
    char *charset = " ,!.";

    char **result = ft_split(str, charset);
    int i = 0;
    
    while (result[i]) {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);

    return 0;
} */
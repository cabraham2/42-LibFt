/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:32:41 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/28 16:48:03 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset) && str[i])
			i++;
		if (!is_separator(str[i], charset) && str[i])
			count++;
		while (!is_separator(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

char	*ft_strdupn(char *src, int n)
{
	char	*create;
	int		i;
	int		x;

	x = 0;
	i = 0;
	while (src[i])
		i++;
	create = malloc((n + 1) * sizeof(char));
	if (!create)
		return (NULL);
	while (x < n && src[x])
	{
		create[x] = src[x];
		x++;
	}
	create[n] = '\0';
	return (create);
}

int	checker(char *str, char *charset, int *j, char ***output)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && *j < ft_count_word(str, charset))
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		while (str[i] && !is_separator(str[i], charset))
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			(*output)[*j] = ft_strdupn(str + i - len, len);
			(*j)++;
			len = 0;
		}
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		j;

	j = 0;
	output = malloc((ft_count_word(str, charset) + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	checker(str, charset, &j, &output);
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
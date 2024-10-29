/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:25:57 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/28 14:55:55 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*variablenew;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (src[i])
	{
		i++;
	}
	variablenew = malloc((i + 1) * sizeof(char));
	if (!(variablenew))
		return (NULL);
	while (src[x])
	{
		variablenew[x] = src[x];
		x++;
	}
	variablenew[x] = '\0';
	return (variablenew);
}

/* int	main(void)
{
	char	*texte = "hello";
	char	*duplicate = ft_strdup(texte);

	if (duplicate)
	{
		printf("%s", duplicate);
	}
	return (0);
}  */
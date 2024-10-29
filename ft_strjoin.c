/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:49:19 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/28 19:52:59 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	dest = malloc((j + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += dest + j + ft_strlen(sep) - ft_strcpy(dest + j, sep);
	}
	dest[j] = '\0';
	return (dest);
}

/* int	main(void)
{
	char 	*strs[] = {"toi", "moi", "eux", "tous ceux qui le veulent"};
	int		size = 4;
	char	*sep = " + ";
 
	char	*result = ft_strjoin(size, strs, sep);
 
	if (result == NULL)
	{
		printf("maloc NUL\n");
		return 1;
	}
 
	printf("Result: %s\n", result);
 
	free(result);
 
	return 0;
} */
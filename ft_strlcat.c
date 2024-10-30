/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:09:42 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/30 02:24:31 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char const *src, unsigned int size)
{
	unsigned int	tdest;
	unsigned int	tsrc;
	unsigned int	concat;

	tdest = 0;
	tsrc = 0;
	concat = 0;
	while (dest[tdest])
		tdest++;
	while (src[tsrc])
		tsrc++;
	if (tdest >= size)
		return (size + tsrc);
	while (concat < (size - tdest - 1) && src[concat])
	{
		dest[tdest + concat] = src[concat];
		concat++;
	}
	dest[tdest + concat] = '\0';
	return (tdest + tsrc);
}

/* int main(void)
{
    char dest[] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 13;
 
    printf("%s %u", dest, ft_strlcat(dest, src, size));
    return 0;
} */
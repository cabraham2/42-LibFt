/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:21:35 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/28 15:11:29 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char dest[70];
// 	char src[] = "Faut arrêter ces conneries de nord et de sud !
// Une fois pour toutes, le nord,
// suivant comment on est tourné, ça change tout !";
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
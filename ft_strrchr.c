/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:27 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/01 17:12:38 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	element;
	int				nb;

	element = (unsigned char)c;
	nb = ft_strlen((char *)str);
	while (nb >= 0)
	{
		if (str[nb] == element)
			return ((char *)&str[nb]);
		nb--;
	}
	return (NULL);
}

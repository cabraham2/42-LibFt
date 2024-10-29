/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:22 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 21:11:40 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	element;

	element = (unsigned char)c;
	if (element == '\0')
		return ((char *)str);
	while (*str)
	{
		if (*str == element)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 15:33:57 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int nb)
{
	if (nb >= 0 && nb <= 127)
	{
		return (1);
	}
	else
		return (0);
}

/* 
int	main(void)
{
	int nb = -2;

	printf("%i", ft_isascii(nb));
	printf("\n%i", isascii(nb));
} */
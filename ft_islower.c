/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 15:33:48 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int nb)
{
	if (nb >= 'a' && nb <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

/* 
int	main(void)
{
	int nb = 'A';

	printf("%i", ft_islower(nb));
	printf("\n%i", islower(nb));
} */
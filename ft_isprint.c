/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 16:21:11 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int nb)
{
	if (ft_isalnum(nb) || (nb >= 32 && nb <= 126))
		return (1);
	else
		return (0);
}

/* 
int	main(void)
{
	int nb = 'A';

	printf("%i", ft_isprint(nb));
	printf("\n%i", isprint(nb));
} */
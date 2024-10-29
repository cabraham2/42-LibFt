/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 15:33:20 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int nb)
{
	if (nb >= 'A' && nb <= 'Z')
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

	printf("%i", ft_isupper(nb));
	printf("\n%i", isupper(nb));
} */
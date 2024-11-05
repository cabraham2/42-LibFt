/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 21:51:34 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int nb)
{
	if (nb >= 'a' && nb <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

static int	ft_isupper(int nb)
{
	if (nb >= 'A' && nb <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_isalpha(int nb)
{
	if (ft_islower(nb) || ft_isupper(nb))
		return (1);
	else
		return (0);
}

/* 
int	main(void)
{
	int nb = 'A';

	printf("%i", ft_isalpha(nb));
	printf("\n%i", isalpha(nb));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 15:37:53 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:07 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 15:40:27 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int nb)
{
	if (ft_isalpha(nb) || ft_isdigit(nb))
		return (1);
	else
		return (0);
}

/* 
int	main(void)
{
	int nb = 'A';

	printf("%i", ft_isalnum(nb));
	printf("\n%i", isalnum(nb));
} */
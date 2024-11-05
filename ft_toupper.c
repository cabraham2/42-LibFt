/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:23 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 21:56:10 by clementabra      ###   ########.fr       */
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

int	ft_toupper(int nb)
{
	int	diff;

	diff = 'a' - 'A';
	if (ft_islower(nb))
	{
		nb = nb - diff;
	}
	return (nb);
}

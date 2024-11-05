/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:15 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 21:55:51 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int nb)
{
	if (nb >= 'A' && nb <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_tolower(int nb)
{
	int	diff;

	diff = 'a' - 'A';
	if (ft_isupper(nb))
	{
		nb = nb + diff;
	}
	return (nb);
}

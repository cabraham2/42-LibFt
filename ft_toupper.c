/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:23 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 16:15:01 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:04:22 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/30 03:15:14 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issapce(int nb)
{
	if ((nb >= 9 && nb <= 13) || nb == 32)
		return (1);
	else
		return (0);
}

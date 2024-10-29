/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:20:33 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:51:21 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write (fd, &str[i], 1);
	}
	write (fd, "\n", 1);
}

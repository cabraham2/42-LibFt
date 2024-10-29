/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:05:11 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/28 16:50:19 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nb;

	nb = 0;
	i = 0;
	signe = 1;
	while (str[i] < 32 || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '+')
			return (0);
		if (str[i] == '-')
		{
			signe *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * signe);
}

/* #include <stdio.h>
int main(void)
{
	char *texte = "   ---+--+1234qwert";
	printf("%i", ft_atoi(texte));
} */
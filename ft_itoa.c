/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:42:26 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 13:51:10 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_itoa - Convertit un entier en une chaîne de caractères.
 * 
 * Cette fonction prend un entier 'n' et 
 * le convertit en une chaîne de caractères.
 * Elle gère les nombres négatifs, positifs et zéro.
 *
 * Paramètres :
 *   n - L'entier à convertir en chaîne.
 *
 * Retour :
 *   La chaîne de caractères représentant l'entier ou NULL en cas d'erreur.
 */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		temp;

	temp = n;
	len = (n <= 0) ? 1 : 0;
	while (temp)
	{
		len++;
		temp /= 10;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/* 
int main(void)
{
	int number = 12345;
	char *result;

	result = ft_itoa(number);
	if (result)
	{
		printf("The string representation of %d is %s\n", number, result);
		free(result);
	}
	else
	{
		printf("Conversion failed\n");
	}

	return 0;
} */
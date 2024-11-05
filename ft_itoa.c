/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:42:26 by clementabra       #+#    #+#             */
/*   Updated: 2024/11/05 21:52:22 by clementabra      ###   ########.fr       */
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

static void	*min(int n)
{
	char	*str;

	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "0", 2);
		return (str);
	}
	else
	{
		str = malloc(12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
}

static int	tempo(int n, int len, int temp)
{
	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (temp)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

static char	*string(char *str, int len)
{
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		temp;

	str = NULL;
	len = 0;
	temp = n;
	if (n == -2147483648 || n == 0)
		return (min(n));
	len = tempo(n, len, temp);
	str = string(str, len);
	if (!str)
		return (NULL);
	if (n < 0 && n != -2147483648 && n != 0)
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
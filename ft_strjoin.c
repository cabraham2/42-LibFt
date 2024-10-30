/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:49:19 by cabraham          #+#    #+#             */
/*   Updated: 2024/10/30 02:34:18 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This function calculates the factorial of a given number.
 *
 * @param n The number for which the factorial is to be calculated.
 * @return The factorial of the given number.
 *
 * The function uses a recursive approach to calculate the factorial.
 * If the input number is less than 0,
 * the function returns -1 to indicate an error.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}

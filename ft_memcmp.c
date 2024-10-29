/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:12 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:15:02 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;

	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}

/* 
int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "HelloThere";

    // Comparer les 5 premiers caractères de str1 et str2
    int result = memcmp(str1, str2, 5);
    int resultat = ft_memcmp(str1, str2, 5);

    if (result == 0)
        printf("Les 5 premiers caractères sont identiques\n");
    else
        printf("Les 5 premiers caractères sont différents\n");
	
	if (resultat == 0)
        printf("Les 5 premiers caractères sont identiques\n");
    else
        printf("Les 5 premiers caractères sont différents\n");

	printf("\n%i\n", result);
	printf("\n%i\n", resultat);

    // Comparer les 10 premiers caractères de str1 et str2
    result = memcmp(str1, str2, 10);
	resultat = ft_memcmp(str1, str2, 10);


    if (result == 0)
        printf("Les 10 premiers caractères sont identiques\n");
    else
        printf("Les 10 premiers caractères sont différents\n");
	
	if (resultat == 0)
        printf("Les 10 premiers caractères sont identiques\n");
    else
        printf("Les 10 premiers caractères sont différents\n");
	
	printf("\n%i\n", result);
	printf("\n%i\n", resultat);

    return 0;
} */
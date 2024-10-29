/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:11:03 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 13:51:56 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nobj, size_t size)
{
	char	*variable;
	size_t	i;
	size_t	totalsize;

	i = 0;
	totalsize = nobj * size;
	variable = malloc(totalsize);
	if (!variable)
		return (NULL);
	while (i < totalsize)
	{
		variable[i] = 0;
		i++;
	}
	return (variable);
}

/* int main(void)
{
    int *arr;
	int *test;
    size_t n = 5;
    
    // Allouer un tableau de 5 entiers avec calloc
    arr = (int *)calloc(n, sizeof(int));
	test = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
    {
        printf("Allocation de mémoire échouée\n");
        return (1);
    }

    // Afficher les valeurs initialisées (elles doivent être à 0)
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%ld] = %d\n", i, arr[i]);
    }
	for (size_t i = 0; i < n; i++)
    {
        printf("arr[%ld] = %d\n", i, test[i]);
    }

    // Libérer la mémoire allouée
    free(arr);
    free(test);

    return 0;
} */
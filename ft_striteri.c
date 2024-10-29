/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementabraham <clementabraham@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:19:39 by clementabra       #+#    #+#             */
/*   Updated: 2024/10/28 14:16:16 by clementabra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_striteri - Applique une fonction à chaque caractère
 * //d'une chaîne en fonction de son index.
 * 
 * Cette fonction applique la fonction 'f' à chaque caractère de la chaîne 's',
 * en passant l'index du caractère et un
 * 	//pointeur vers le caractère à la fonction 'f'.
 * La chaîne 's' est directement modifiée par 'f'.
 *
 * Paramètres :
 *   s - La chaîne de caractères sur laquelle la fonction 'f' est appliquée.
 *   f - La fonction à appliquer sur chaque caractère.
 * 			//Elle prend en paramètre l'index du
 *       caractère et un pointeur vers ce caractère.
 *
 * Retour :
 *   Cette fonction ne renvoie rien (void).
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		taille;
	int		i;
	char	*c;

	c = (char *)s;
	i = 0;
	taille = ft_strlen(c);
	while (i < taille)
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
void example_function(unsigned int i, char *c)
{
	*c = *c + i;
}

int main(void)
{
	char source[] = "Hello, World!";
	
	ft_striteri(source, example_function);
	printf("Modified string: %s\n", source);
	
	return 0;
}
 */
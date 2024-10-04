/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:17:39 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:40 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	count_taille(char *s1, char *s2)
{
	int	taille;
	int	i;

	i = 0;
	taille = 0;
	while (s1[i++] != '\0')
		taille++;
	i = 0;
	while (s2[i++] != '\0')
		taille++;
	return (taille);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		taille;
	int		i;
	char	*dest;

	i = 0;
	taille = count_taille(s1, s2);
	dest = malloc(sizeof(char) * (taille + 1));
	if (dest == NULL)
		return (NULL);
	taille = 0;
	while (s1[i] != '\0')
		dest[taille++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dest[taille++] = s2[i++];
	dest[taille] = '\0';
	return (dest);
}

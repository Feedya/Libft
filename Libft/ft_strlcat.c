/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:26 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:41:28 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_taille;
	size_t	i;

	i = 0;
	dest_taille = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dest_taille < dstsize)
	{
		while (dest_taille < dstsize - 1 && src[i] != '\0')
		{
			dst[dest_taille] = src[i];
			i++;
			dest_taille++;
		}
		dst[dest_taille] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}

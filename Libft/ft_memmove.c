/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:17 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:41:19 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	copie_norm(unsigned char *dst, const unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	copie_arriere(unsigned char *dest, const unsigned char *str, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dest[i] = str[i];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (dst);
	if ((unsigned char *)dst < (const unsigned char *)src)
	{
		copie_norm((unsigned char *)dst, (const unsigned char *)src, len);
		return (dst);
	}
	else if ((unsigned char *)dst > (const unsigned char *)src)
	{
		copie_arriere((unsigned char *)dst, (const unsigned char *)src, len);
		return (dst);
	}
	return (dst);
}

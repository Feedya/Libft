/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:39:36 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:39:37 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*dest;
	size_t				i;

	dest = (unsigned char *)dst;
	str = (const unsigned char *)src;
	i = 0;
	while (i != n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

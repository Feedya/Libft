/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:04 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:41:05 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		temp;
	size_t				i;

	temp = (unsigned char)c;
	i = 0;
	str = (const unsigned char *)s;
	while (i != n)
	{
		if (str[i] == temp)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

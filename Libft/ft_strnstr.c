/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:43:05 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:43:07 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	c = 0;
	i = 0;
	while (i != len && big[i] != '\0')
	{
		c = 0;
		while (little[c] == big[i + c] && i + c != len
			&& little[c] != '\0' && big[i + c] != '\0')
		{
			c++;
		}
		if (little[c] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}
